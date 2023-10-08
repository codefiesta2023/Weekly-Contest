import math

# Read the integer 'n' from the user.
n = int(input())

# Initialize a flag variable to 0.
flag = 0

# Iterate through potential divisors from 2 to the square root of 'n'.
for i in range(2, int(math.sqrt(n)) + 1):
    # Check if 'n' is divisible by 'i'.
    if n % i == 0:
        # If a divisor is found, set 'flag' to 1 and break out of the loop.
        flag = 1
        break

# Check the value of 'flag' to determine if 'n' is prime.
if flag == 1:
    print("No")  # 'n' is not prime
else:
    print("Yes") # 'n' is prime
