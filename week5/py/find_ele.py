# ///https://codeforces.com/edu/course/2/lesson/6 for explanations of bs problems
# Read the integer n from input
n = int(input())

# Read a list of integers into the variable v by splitting the input line
v = list(map(int, input().split()))

# Read the integer k from input
k = int(input())

# Initialize left (l) and right (r) pointers for binary search
l = 0
r = n - 1

# Initialize mid to 0
mid = 0

# Perform binary search
while l <= r:
    # Calculate the middle index
    mid = (l + r) // 2

    # If the element at mid is equal to k, break the loop
    if v[mid] == k:
        break
    # If the element at mid is less than k, update the left pointer
    elif v[mid] < k:
        l = mid + 1
    # If the element at mid is greater than k, update the right pointer
    else:
        r = mid - 1

# Check if the element was found
if v[mid] == k:
    print("YES")  # If found, print "YES"
else:
    print("NO")   # If not found, print "NO"

