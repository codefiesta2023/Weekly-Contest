#/* https://www.geeksforgeeks.org/breaking-integer-to-get-maximum-product/ */

n=int(input())
if (n == 2 or n == 3):
	print(n - 1); 
else:
    res = 1; 
    while (n > 4):
        n -= 3
        res *= 3
    print(n * res)



