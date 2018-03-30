t=int(input())
for i1 in range(t):
    l,c=map(int,input().split())
    arr=[[]for i in range(l)]
    for i in range(l):
        for j in range(c):
            if i==0 or i==l-1 or j==0 or j==c-1:
                arr[i].append("*")
            else:
                arr[i].append(".")
    for i in range(l):
        print("".join(arr[i]))
