# In python you can only take strings as input 
# which spans whole line using input()

#Here is list of ways to take input:
# single string: 
#   str = input() 
# single integer:
#   t = int(input())
# multiple strings seperated by space in a list:
#   strarray = input().split()
# multiple numbers seperated by space in a list:
#   numarray = [int(x) for x in input().split()] or
#   numarray = list(map(int,input().split()))

t=int(input())

for _ in range(t):
    a,b=list(map(int,input().split()))
    print(a+b)









    
