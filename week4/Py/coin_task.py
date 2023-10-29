n=int(input())
arr=list(map(int,input().split()))
arr.sort()
ans=1
for i in arr:
    if i>ans:
        break
    else:
        ans+=i
print(ans)
