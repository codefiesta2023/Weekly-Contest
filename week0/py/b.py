#Instead of checking all possible conditions, we can append the
# appropriate string to the answer string and construct the final answer.
t=int(input())

for _ in range(t):
    n=int(input())
    for i in range(1,n+1):
        str=""
        if (i%3==0):
            str+="Fizz"
        if (i%5==0):
            str+="Buzz"
        if (i%7==0):
            str+="Bazz"
        if (str==""):
            print(i)
        else:
            print(str)



 
