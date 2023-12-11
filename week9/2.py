a,b=list(map(int,input().split()))
count1=0
count2=0

for i in range(0,32,2):
    if a&(1<<i)!=0:
        count1+=1
    if b&(1<<i)!=0:
        count2+=1
print("YES" if count1==count2 else "NO")