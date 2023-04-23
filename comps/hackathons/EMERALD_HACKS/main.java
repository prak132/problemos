package comps.hackathons.EMERALD_HACKS;
import java.util.Scanner;
class Main {
    public static boolean[][] shipArray = new boolean[10][10];
    public static void main(String[] args) {
        long start = System.nanoTime();
        Scanner n = new Scanner(System.in);
        System.out.println(
                "Welcome to Battleship! Your objective is to sink all of the enemy's ships."
                        + "There's one 2-spaced ship and one 3-spaced ship hidden below the surface.");
        System.out.println();
        System.out.print("Please enter the length of the board (Between 3-9): ");
            int a = n.nextInt();
            if (a < 3 || a > 9){
                System.out.println("Board value " + "\u001B[3m" + "exceed limit" + "\u001B[0m" + " please try again");
                System.out.print("Choose " + "\u001B[32m" + "Board value" +  "\u001B[0m" + " of grid: ");
                a = n.nextInt();
            }
            else{
            System.out.println("New grid layout is " + a + "X" + a);
            wait(1000);
            }
        boolean[][] gridLayout = new boolean[a+1][a+1];
        layout(gridLayout);
        int numberOfTry = 0;
        int numberOfHits = 0;
        int numberOfSquares = 5;
        boolean[][] shipArray = new boolean[a+1][a+1];
        int randStartRow = (int) (Math.random() * (a));
        int randStartCol = (int) (Math.random() * (a));
        int storeShip1Row = (int) (Math.random() * (a));
        int storeShip1Col = (int) (Math.random() * (a));
        shipArray[storeShip1Row][randStartCol] = true;
        shipArray[randStartRow][storeShip1Col] = true;
        if (storeShip1Row == a) {
            storeShip1Row--;
            shipArray[storeShip1Row][randStartCol] = true;
        } else {
            storeShip1Row++;
            shipArray[storeShip1Row][randStartCol] = true;
        }
        if (storeShip1Col + 3 <= a) {
            shipArray[randStartRow][storeShip1Col + 1] = true;
            shipArray[randStartRow][storeShip1Col + 2] = true;
        } else {
            shipArray[randStartRow][storeShip1Col - 1] = true;
            shipArray[randStartRow][storeShip1Col - 2] = true;
        }
        while (numberOfHits != numberOfSquares) {
            System.out.println();
            System.out.print("Pick a row: ");
            int rowInput = n.nextInt();
            System.out.print("Pick a column: ");
            int columnInput = n.nextInt();
            if (rowInput > a || rowInput < 0 || columnInput > a || columnInput < 0) {
                System.out.println("Input not allowed in grid. Please try again");
                System.out.print("Pick a row: ");
                rowInput = n.nextInt();
                System.out.print("Pick a column: ");
                columnInput = n.nextInt();
            }
            if (shipArray[rowInput][columnInput] && !gridLayout[rowInput][columnInput]) {
                System.out.println("It's a hit! ");
                numberOfHits += 1;
                gridLayout[rowInput][columnInput] = true;
                layout(gridLayout);
            } else if (gridLayout[rowInput][columnInput]) {
                System.out.println("You have already got a hit in this spot");
                layout(gridLayout);
            }
            else {
                gridLayout[rowInput][columnInput] = true;
                System.out.println("It's a miss!");
                layout(gridLayout);
                numberOfTry++;
            }
            if (numberOfHits == numberOfSquares) {
                int hitAccuracy = 100 * numberOfHits / (numberOfTry + numberOfHits);
                int totalGuesses = numberOfTry + numberOfHits;
                // int so auto rounds
                System.out.println("Congratulations!");
                System.out.println("Your hit percentage was: " + hitAccuracy + "%!");
                System.out.println("The total guesses you took were: " + totalGuesses + "!");
                long duration = (System.nanoTime() - start) / 1000000000;
                long finalDuration = duration/= 60;
                System.out.println("Your overall time was: " + finalDuration + " minutes!");

                break;
            }
        }
    }
    public static void wait(int ms)
{
    try
    {
        Thread.sleep(ms);
    }
    catch(InterruptedException ex)
    {
        Thread.currentThread().interrupt();
    }
}
    public static void layout(boolean[][] gridLayout) {
        int storeNumOut = 0; 
        System.out.print("  0  1  2  3  4  5  6  7  8  9");
        for (int r = 0; r < gridLayout.length; r++) {
            System.out.println();
            System.out.print(storeNumOut);
            storeNumOut += 1;
            for (int c = 0; c < gridLayout[r].length; c++) {
                if (gridLayout[r][c] == false) {
                    System.out.print(" - ");
                } else if (gridLayout[r][c] && shipArray[r][c]) {
                    System.out.print("\u001B[32m" + " X " + "\u001B[0m");
                } else {
                    System.out.print("\u001B[31m" + " O " + "\u001B[0m");
                }
            }
        }
        System.out.println();
    }
}