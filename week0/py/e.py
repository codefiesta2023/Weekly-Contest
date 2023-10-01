# In binary representation of a number, 1 represents power of 2 which are not zero
# for example 4 => 100 => 1*2^2 + 0*2^1 + 0*2^0.
# To represnt a number as sum of powers of two, we can just take terms which are not zero in above
# example, i.e terms corresponding to 1's in binary representation.
# Therefore to get minimum no of powers of two whoose sum is equal to number, we can just count the
# number of 1's in binary representation. The splitting does not matter.
# The only number which cannot be represented as sum of powers of two is number which do not
# contain any 1's in binary representation, i.e 0. This case needs to be handled seperately. 

t=int(input())

for _ in range(t):
    n,m=list(map(int,input().split())) 
    count=0
    for i in range(m):
        line = [int(x) for x in input()]
        for j in line:
            if j==1:
                count+=1
    if count==0:
        print(-1)
    else:
        print(count)


