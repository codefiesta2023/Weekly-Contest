t=int(input())

for _ in range(t):
    n=int(input())
    sum=(n*(n+1))//2
    print("YES" if sum%2==0 else "NO")


