n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

i, j = 0, 0
while i < n or j < n:
    if j == n or (i < n and a[i] < b[j]):
        print(a[i], end=" ")
        i += 1
    else:
        print(b[j], end=" ")
        j += 1

print()

