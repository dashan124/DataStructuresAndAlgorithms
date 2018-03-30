t=int(input())
for i1 in range(t):
    l,c=map(int,input().split())
    arr=[[]for i in range(l)]
    for i in range(l):
        for j in range(c):
            if i%2==0 and j%2==0:
                arr[i].append("*")
            if i%2!=0 and j%2!=0:
                arr[i].append("*")
            if i%2!=0 and j%2==0:
                arr[i].append(".")
            if i%2==0 and j%2!=0:
                arr[i].append(".")
    for i in range(l):
        print("".join(arr[i]))
