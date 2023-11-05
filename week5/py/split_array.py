# ///https://codeforces.com/edu/course/2/lesson/6 for explanations of bs problems
def isgood(mid, k, v):
    segments = 1
    currentsum = 0
    for i in v:
        currentsum += i
        if currentsum > mid:
            segments += 1
            currentsum = i
    return segments <= k

n, k = map(int, input().split())  # Read the long long n and k from input

v = list(map(int, input().split()))

# Initialize l and r
l = max(v)  # Initialize l to the maximum value in the list v
r = sum(v)  # Initialize r to the sum of all elements in the list v

while l < r:
    mid = (l + r) // 2
    if isgood(mid, k, v):
        r = mid
    else:
        l = mid + 1

print(r)  # Output the result in Python

