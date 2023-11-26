def solve():
    n=int(input())
    al=b=0
    a = list(map(int, input().split()))

    i, j = 0, n - 1
    for k in range(n):
        if a[i] >= a[j] and k % 2:
            b += a[i]
            i += 1
        elif a[i] < a[j] and k % 2:
            b += a[j]
            j -= 1
        elif a[i] >= a[j] and k % 2 == 0:
            al += a[i]
            i += 1
        elif a[i] < a[j] and k % 2 == 0:
            al += a[j]
            j -= 1

    if al == b:
        print("Tie")
    elif al > b:
        print("Alice")
    else:
        print("Bob")

def main():
    tst_cnt = int(input())

    while tst_cnt > 0:
        solve()
        tst_cnt -= 1

if __name__ == "__main__":
    main()
