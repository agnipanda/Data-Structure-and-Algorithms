ch = int(input("Enter 0 for recursive method and 1 for dynmic:"))
n = int(input("Enter n to find nth fibonacci term:"))

#Recursive Solution
def recfibo(n):
	if(n < 0):
		return('Invalid number..!!')
	elif(n == 0 or n == 1):
		return(n)
	return(recfibo(n-1) + recfibo(n-2))

#Dynamic Solution
def dynfibo(n):
	if(n <= 0):
		print('Invalid number')
	elif(n == 1 or n == 2):
		print(n-1)
	else:
		a = 0
		b = 1
		for i in range(3,n+1):
			c = a + b
			a = b
			b = c
		print(c)

if(ch == 0):
	print(recfibo(n-1))
elif(ch == 1):
	dynfibo(n)
else:
	print("Invalid Choice..!!")