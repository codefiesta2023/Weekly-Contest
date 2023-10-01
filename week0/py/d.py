t=int(input())

for _ in range(t):
    n=int(input())
    arr=[]
    for i in range(n):
        line = [int(x) for x in input().split()]
        arr.append(line)

    count = 0
    for i in range(n):
        for j in range(i+1,n):
            if arr[i][j]!=arr[j][i]:
                count += 1
    if count==0:
        print("YES")
    else:
        print("NO")
        print(count)





        


