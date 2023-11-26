def solve():
    n = int(input())
    a = list(map(int, input().split()))

    for i in range(0, n, 2):
        print(a[i], end=" ")
    for i in range(1, n, 2):
        print(a[i], end=" ")
    print()

def main():
    tst_cnt = int(input())

    while tst_cnt > 0:
        solve()
        tst_cnt -= 1

if __name__ == "__main__":
    main()

