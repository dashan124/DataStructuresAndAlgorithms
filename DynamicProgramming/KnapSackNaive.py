def KnapSack(value,weight,W,n):
    if n==0 or W==0:
        return 0
    if weight[n-1]>W:
        return KnapSack(value,weight,W,n-1)
    else:
        return max(KnapSack(value,weight,W-weight[n-1],n-1)+value[n-1],KnapSack(value,weight,W,n-1))

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
