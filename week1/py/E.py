# Read the number of test cases 't' from the user.
t = int(input())

# Iterate through each test case.
for _ in range(t):
    # Read an integer 'n' from the user.
    n = int(input())
    
    # Check if 'n' is equal to 3.
    if n == 3:
        print("No")
    else:
        print("Yes")
#If n is odd, n-1 is not prime as only 2 is even prime.
#so we can represent n as n-1 + 1
#If n is even, n is not prime as only 2 is even prime.
# so we can represent n as n + 0