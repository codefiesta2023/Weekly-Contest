t=int(input())
for _ in range(t):
    n=int(input())
    arr=[x for x in input()]
    nums=[arr[i] for i in range(0,n,2)]
    nums.sort()
    soln=""
    for i in range(0,n-1,2):
        soln+=nums[i//2]
        soln+=arr[i+1]
    soln+=nums[-1] 
    print(soln)
    
