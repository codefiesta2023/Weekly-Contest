# Define a function to calculate the greatest common divisor (GCD) of two numbers.
def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

# Define a function to calculate the least common multiple (LCM) of two numbers using GCD.
def lcm(a, b):
    return (a * b)//gcd(a,b)

# Read the number of test cases from the user.
t = int(input())

# Iterate through each test case.
for _ in range(t):
    # Read a pair of integers from the user and split them into 'a' and 'b'.
    a, b = list(map(int, input().split()))
    
    # Calculate the GCD of 'a' and 'b' using the 'gcd' function.
    g = gcd(a, b)
    
    # Calculate the LCM of 'a' and 'b' using the 'lcm' function and the GCD 'g'.
    l = lcm(a, b)
    
    # Print the sum of GCD and LCM.
    print(g + l)

