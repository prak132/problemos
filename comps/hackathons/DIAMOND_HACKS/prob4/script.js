const quoteDisplay = document.getElementById('quoteDisplay');
const quoteInput = document.getElementById('quoteInput');
const timerElement = document.getElementById('timer');
const input = document.querySelector('.theme-switcher input');
sel_start = quoteInput.selectionStart;
input_value = quoteInput.value;

quoteInput.addEventListener('input', (event) => {
    intellisense(event);
    const quoteArray = quoteDisplay.querySelectorAll('span');
    const inputArray = quoteInput.value.split('');
    let correct = true;
    quoteArray.forEach((characterSpan, index) => {
        const character = inputArray[index];
        if (character == null) {
            characterSpan.classList.remove('correct');
            characterSpan.classList.remove('incorrect');
            correct = false;
        } else if (character === characterSpan.innerText) {
            characterSpan.classList.add('correct');
            characterSpan.classList.remove('incorrect');
            if(index + 1 === inputArray.length) {
                correct = true;
            }
        } else {
            characterSpan.classList.remove('correct');
            characterSpan.classList.add('incorrect');
            correct = false;
        }
    });
    if(correct) console.log((quoteArray.length*12000)/(new Date() - startTime));
});

function intellisense(event) {
    sel_start = quoteInput.selectionStart
    input_value2 = quoteInput.value
    start_of_line = input_value2.lastIndexOf('\n', sel_start-2) + 1;
    last_line = input_value2.slice(start_of_line, sel_start-1);
    num_spaces = last_line.search(/\S|$/);
    if(event.inputType == 'deleteContentBackward' && quoteInput.value.length + 1 == input_value.length) {
        if(input_value[sel_start] == '(')
            delete_brackets(')');
        else if(input_value[sel_start] == '{')
            delete_brackets('}');
        else if(input_value[sel_start] == '[')
            delete_brackets(']');
        else if(input_value[sel_start] == '"')
            delete_brackets('"');
        else if(input_value[sel_start] == "'")
            delete_brackets("'");
        else if(input_value[sel_start] == '`')
            delete_brackets('`');
        else if(input_value[sel_start] == ' ' && sel_start - start_of_line <= num_spaces + 1) {
            cursor = start_of_line + (sel_start - start_of_line) - (sel_start - start_of_line)%4
            quoteInput.value = input_value2.slice(0, cursor) + input_value2.slice(sel_start)
            quoteInput.setSelectionRange(cursor, cursor)
        }
    } else if(event.inputType == 'insertLineBreak' || input_value2[sel_start-1] == '\n') {
        inserted = " ".repeat(num_spaces);
        if(input_value2[sel_start-2] == '{' || input_value2[sel_start-2] == ':') { //curly bracket indentation and python identation
            inserted += "    ";
            if(input_value2[sel_start] == '}') {
                inserted += '\n' + " ".repeat(num_spaces);
            }
            num_spaces += 4;
        }
        insert_text(inserted);
        quoteInput.setSelectionRange(sel_start + num_spaces, sel_start + num_spaces);
    } else if(event.inputType == 'insertText') {
        if(event.data == '(')
            insert_text(')');
        else if(event.data == '{')
            insert_text('}');
        else if(event.data == '[')
            insert_text(']');
        else if(event.data == '"')
            insert_text('"');
        else if(event.data == "'")
            insert_text("'");
        else if(event.data == '`')
            insert_text('`');
    } 
    input_value = quoteInput.value;
}

function count_spaces(text) {
    return text.search(/\S|$/);
}

function insert_text(text) {
    input_value = quoteInput.value;
    quoteInput.value = input_value.slice(0, sel_start) + text + input_value.slice(sel_start);
    quoteInput.setSelectionRange(sel_start, sel_start);
}

function delete_brackets(text) {
    input_value = quoteInput.value;
    if(sel_start < input_value.length && input_value[sel_start] == text) {
        quoteInput.value = input_value.slice(0, sel_start) + input_value.slice(sel_start + 1);
        quoteInput.setSelectionRange(sel_start, sel_start);
    }
}

function getRandomQuote() {
    return fetch(RANDOM_QUOTE_API_URL)
        .then(response => response.json())
        .then(data => data.content);
}

async function renderNewQuote() {
    // const quote = await getRandomQuote();
    const quote = "print(\"hi\")"
    quoteDisplay.innerHTML = '';
    quote.split('').forEach(character => {
        const characterSpan = document.createElement('span');
        characterSpan.innerText = character;
        quoteDisplay.appendChild(characterSpan);
    });
    quoteInput.value = null;
    startTimer();
}

let startTime
function startTimer() {
    timerElement.innerText = 0;
    startTime = new Date();
    setInterval(() => {
        timer.innerText = getTimerTime();
    }, 1000);
}

function getTimerTime() {
    return Math.floor((new Date() - startTime) / 1000);
}

renderNewQuote();

input.addEventListener('change', (e) => {
  if (e.target.checked) {
    document.body.setAttribute('data-theme', 'dark');
  } else {
    document.body.setAttribute('data-theme', 'light');
  }
})