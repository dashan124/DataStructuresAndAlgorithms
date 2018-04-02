def KnapSack(value,weight,capacity,n):
    if n==0 or capacity==0:
        return 0
    if weight[n-1]>capacity:
        return KnapSack(value,weight,capacity,n-1)
    else:
        # max of two cases
        # 1 nth item is included
        #2 nth item is not included
        return max(value[n-1]+KnapSack(value,weight,capacity-weight[n-1],n-1)
        ,KnapSack(value,weight,capacity,n-1))
print("Enter n")
n=int(input())
print("Enter value and weight")
value=list(map(int,input().split()))
weight=list(map(int,input().split()))
print("enter capacity")
capacity=int(input())
print(KnapSack(value,weight,capacity,n))
