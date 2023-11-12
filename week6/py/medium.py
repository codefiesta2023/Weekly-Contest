def solve():
    a = list(map(int, input().split()))
    a.sort()

    if a[1] == a[0] or a[1] == a[2]:
        print(-1)
    else:
        print(a[1])


tstCnt = int(input())

for _ in range(tstCnt):
    solve()

