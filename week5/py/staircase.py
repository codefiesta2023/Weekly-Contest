# ///https://codeforces.com/edu/course/2/lesson/6 for explanations of bs problems
def isgood(k, n):
    return (k * (k + 1)) // 2 <= n

n = int(input())

l = -1
r = 10**9 + 1

while l + 1 < r:
    mid = (l + r) // 2
    if isgood(mid, n):
        l = mid
    else:
        r = mid

print(l)


