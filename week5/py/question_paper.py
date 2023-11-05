# ///https://codeforces.com/edu/course/2/lesson/6 for explanations of bs problems
t=int(input())

for _ in range(t):
    n,m=list(map(int,input().split()))
    floors=list(map(int,input().split()))
    bundle=list(map(int,input().split()))
    for i in range(1,n):
        floors[i]+=floors[i-1]
    for k in bundle:
        l=-1
        r=n
        #equivalent to c++ lower_bound()
        while(l+1<r):
            mid = (l+r)//2
            if (floors[mid]>=k):
                r=mid
            else:
                l=mid
        print(r+1,end=' ')
    print()
