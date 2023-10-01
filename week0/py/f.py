t=int(input())

for _ in range(t):
    n=int(input())
    i=31
    while i>=0:
        if (n & 1<<i) != 0:
            print(31-i, end=' ')
        i-=1
















