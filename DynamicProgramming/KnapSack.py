def KnapSack(value,weight,W,n):
    K=[[0 for i in range(W+1)]for j in range(n+1)]
    for i in range(0,n+1):
        for w in range(0,W+1):
            if i==0 or w==0:
                K[i][w]=0
            elif weight[i-1]<=w:
                K[i][w]=max(K[i-1][w],K[i-1][w-weight[i-1]]+value[i-1])
            else:
                K[i][w]=K[i-1][w]
    print(K)
    return K[n][W]
print("Enter the no of Items in Total")
n=int(input())
print("Enter item item Value and weights(space seperated):")
value=[]
weight=[]
for i in range(n):
    x,y=map(int,input().split())
    value.append(x)
    weight.append(y)
print("Enter the capacity")
w=int(input())
print(KnapSack(value,weight,w,n))
