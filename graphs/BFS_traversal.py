visited=[]
l=[]
queue=[]
V,E=map(int,input("Enter the number of vertices and edges respectively:").split(" "))
for i in range(V):
	l.append([])
	visited.append(0)
for i in range(E):
	a,b=map(int,input("Enter the connected vertices:\n").split(" "))
	l[a].append(b)
s=int(input("Enter the start point of the traversal:"))
visited[s]=1
queue.append(s)
while(queue!=[]):
	s=queue[0]
	print(s)
	queue.pop(0)

	for i in range(len(l[s])):
		if(visited[l[s][i]]==0):
			visited[l[s][i]]=1
			queue.append(l[s][i])