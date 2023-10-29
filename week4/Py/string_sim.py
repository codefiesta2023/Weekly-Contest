t=int(input())
for i in range(t):
    n=int(input())
    str1=[x for x in input()]
    str2=[x for x in input()]
    str1.sort()
    str2.sort()
    flag=False
    for i in range(n):
        if str1[i]!=str2[i]:
            flag=True
            break
    if flag==True:
        print("NO")
    else:
        print("YES")
