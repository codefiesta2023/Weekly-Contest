import math

# Read the number of test cases 't' from the user.
t = int(input())

# Create a sieve to efficiently find prime numbers up to 100000.
sieve = [True] * 100000

# Use the Sieve of Eratosthenes algorithm to mark non-prime numbers.
for i in range(2, int(math.sqrt(100000)) + 1):
    if sieve[i] == True:
        for j in range(i * i, 100000, i):
            sieve[j] = False

# Iterate through each test case.
for _ in range(t):
    # Read two integers 'a' and 'b' from the user, representing the range [a, b].
    a, b = list(map(int, input().split()))
    
    # Initialize empty lists 'res' to store the twin prime pairs and 'count' to count them.
    res = []
    count = 0
    
    # Iterate through numbers in the range [a, b-1].
    for i in range(a, b - 1):
        # Check if both 'i' and 'i+2' are prime (twin prime pair).
        if sieve[i] == True and sieve[i + 2] == True:
            count += 1
            res.append((i, i + 2))
    
    # If no twin prime pairs are found, print "No."
    if count == 0:
        print("No")
    else:
        # Otherwise, print "Yes" and list the twin prime pairs.
        print("Yes")
        for i in res:
            print(i[0], i[1])


