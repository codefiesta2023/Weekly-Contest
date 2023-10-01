# To check if matrix is symmetric, we need to check if elements at
# index i,j is same as element at index j,i 
# if not increment the counter.

# When in a for loop i ranges from 0 to some n and within it 
# in another for loop j ranges from i to some m,
# arr[i][j] traverses the upper triangular matrix 
# and arr[j][i] traverses lower triangular matrix,
# if we imagine the 2d array to be a matrix.

# When we range j from i+1 to n, we traverse upper triangular matrix
# without diagonal elements.In this case diagonal elements
# do not matter so both traversal works

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





        


