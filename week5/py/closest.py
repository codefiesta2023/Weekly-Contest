///#https://codeforces.com/edu/course/2/lesson/6 for explanations of bs problems
n = int(input())  # Read the integer n from input

v = list(map(int, input().split()))  # Read a list of integers into the variable v by splitting the input line

k = int(input())  # Read the integer k from input

# Maintain invariants v[l] <= k and v[r] > k
l = -1
r = n
mid = 0

# Perform binary search
while l + 1 < r:
    mid = (l + r) // 2
    if v[mid] <= k:
        l = mid
    else:
        r = mid

# Invariants are still maintained
if l == -1:
    print(v[0])  # k not in array and no elements less than or equal to k
elif r == n:
    print(v[n - 1])  # k not in array and all elements less than k
elif abs(v[l] - k) > abs(v[r] - k):
    print(v[r])  # v[l] <= k and v[r] > k, check which is closest to k
else:
    print(v[l])

