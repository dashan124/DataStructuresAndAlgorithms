def get(n,mem,count,arr):
    if n<0:
        return 0
    elif n==0:
        return 1
    elif count<=0:
        return 0
    elif mem[n][count]!=-1:
        return mem[n][count]
    else:
        mem[n][count]=get(n,mem,count-1,arr)+get(n-arr[count-1],mem,count,arr)
        return mem[n][count]
n,count=map(int,input().split())
arr=list(map(int,input().split()))
mem=[[-1 for j in range(count+1)]for i in range(n+1)]
print(get(n,mem,count,arr))
