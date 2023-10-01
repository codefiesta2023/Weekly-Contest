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


