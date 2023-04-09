#unfinsihed sol


def solve(P: int) -> None:
    lo = 0
    hi = 10**9
    while lo < hi:
        mid = (lo + hi + 1) // 2
        primogems_spent = 0
        baizhu_obtained = False
        while primogems_spent <= P:
            item = wish()
            primogems_spent += 160
            if item == "Baizhu":
                baizhu_obtained = True
                break
        if baizhu_obtained:
            hi = mid - 1
        else:
            lo = mid
    buy(lo - P)

def buy(primogems_to_buy: int) -> int:
    print('buy ' + str(primogems_to_buy), flush=True)
    response = input()
    if response == 'WRONG_ANSWER':
        exit()
    you, got, amount, primogems = response.split()
    return int(amount)

def wish() -> str:
    print('wish', flush=True)
    response = input()
    if response == 'WRONG_ANSWER':
        exit()
    you, got, item = response.split()
    return item