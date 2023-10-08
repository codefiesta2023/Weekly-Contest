import math

# Read the number of test cases 't' from the user.
t = int(input())

# Iterate through each test case.
for _ in range(t):
    # Read an integer 'n' from the user.
    n = int(input())
    
    # Initialize a flag variable to 0.
    flag = 0
    
    # Iterate through potential divisors from 2 to the square root of 'n'.
    for i in range(2, int(math.sqrt(n)) + 1):
        # Check if 'n' is divisible by 'i'.
        if n % i == 0:
            # If a divisor is found, print the result of 'n' divided by 'i'.
            print(n // i)
            flag = 1
            break
    
    # If no divisor is found within the range, print 1 to indicate that 'n' is prime.
    if flag == 0:
        print(1)
