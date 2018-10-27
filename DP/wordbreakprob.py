t = int(input())

for _ in range(t):
	n = int(input())
	dic = input().strip().split(' ')
	s = input()
	temp = ""
	j = 0
	while(j != len(s)):
		for i in range(j,len(s)+1):
			if(s[j:i] in dic):
				temp = i
		if(temp == ""):
			print("0")
			break
		j = temp
		temp = ""
		if(j == len(s)):
			print("1")