t=int(input())
for _ in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    arr.sort()
    flag=False
    for i in range(n-1):
        if arr[i+1]-arr[i]>1:
            print("NO")
            flag=True
            break
    if flag==False:
        print("YES")

