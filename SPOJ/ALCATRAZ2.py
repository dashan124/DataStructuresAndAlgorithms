arr=list(map(int,input().split()))
q=int(input())
s=sum(arr)
for i in range(q):
    a,b=map(int,input().split())
    if arr[a-1]>arr[b-1]:
        s-=arr[b-1]
    else:
        s-=arr[a-1]
print(s)
