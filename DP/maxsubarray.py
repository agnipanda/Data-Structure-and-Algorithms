n = int(input())
l = list(map(int, input().strip().split(' ')))

curmax = 0
summax = 0

for i in range(n):
	curmax += l[i]
	if(curmax < 0):
		curmax = 0
	if(curmax > summax):
		summax = curmax

print(summax)