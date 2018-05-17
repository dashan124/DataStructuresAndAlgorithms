print("Enter the no of vertices in the graph")
n=int(input())
print("Enter the no of edges in the graph")
e=int(input())
print("Enter edges with their respective weights")
weight=[[100000 for i in range(n)]for j in range(n)]
graph=[]
for i in range(e):
    graph.append([])
i=0
while i<e:
    x,y,w=map(int,input().split())
    if x<n and y<n:
        graph[x].append(y)
        weight[x][y]=w
        i+=1
    else:
        print("Invalid Edge Input Again")
        i-=1
s=0
print(graph)
dist=[100000]*n
dist[s]=0
for i in range(n):
    for j in range(e):
        for k in graph[j]:
            if dist[k]>dist[j]+weight[j][k]:
                dist[k]=dist[j]+weight[j][k]
print(dist)
