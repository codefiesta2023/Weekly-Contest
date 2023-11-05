# ///https://codeforces.com/edu/course/2/lesson/6 for explanations of bs problems
def isgood(mid, n):
    t = mid * mid
    return n >= t

n = int(input()) 
l = 1
r = 10**9 + 1 

while l + 1 < r:
    mid = (l + r) // 2
    if isgood(mid, n):
        l = mid
    else:
        r = mid

print(l)

#or can print floor(sqrt(n))
#import math
#n = int(input())
#result = int(math.floor(math.sqrt(n)))
#print(result)


