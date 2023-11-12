def solve():
    n = int(input())
    a = list(map(int, input().split()))
    mp = {}

    for i in range(n):
        mp[a[i]] = mp.get(a[i], 0) + 1

    for i in range(n):
        if mp[a[i]] == 1:
            print(i)
            break

tstCnt = int(input())

for _ in range(tstCnt):
    solve()
