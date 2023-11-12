def solve():
    a, b = list(map(int, input().split()))
    if b:
        print((b - a % b) % b)
    else:
        print(-1)

tstCnt = int(input())

for _ in range(tstCnt):
    solve()

