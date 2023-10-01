# The sum of all numbers from 1,...,n can be given by formula n*(n+1) / 2 .
# If this sum is even, it can be divided into 2 numbers which are equal.
# If it is odd then it is not possible.

# In cpp: n is less than 10^6 therefore it can be accomodated by int,
# but when calculating sum, we are multiplying n with n+1
# which can get as large as 10^12 so we need to use long long.
# In python there is no such limits on int

t=int(input())

for _ in range(t):
    n=int(input())
    sum=(n*(n+1))//2
    print("YES" if sum%2==0 else "NO")


