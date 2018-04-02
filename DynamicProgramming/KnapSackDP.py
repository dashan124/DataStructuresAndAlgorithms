def KnapSack(value,weight,capacity,n):
    mem=[[0 for i in range(capacity+1)]for j in range(n+1)]
    for i in range(n+1):
        for j in range(capacity+1):
            if i==0 or j==0:
                mem[i][j]=0
            elif weight[i-1]<=j:
                mem[i][j]=max((value[i-1]+mem[i-1][j-weight[i-1]]),mem[i-1][j])
            else:
                mem[i][j]=mem[i-1][j]
    return mem[n][capacity]



print("Enter n")
n=int(input())
print("Enter value and weight")
value=list(map(int,input().split()))
weight=list(map(int,input().split()))
print("enter capacity")
capacity=int(input())
print(KnapSack(value,weight,capacity,n))
