import sys

def jimOrders(orders):
    # Complete this function
    pass

if __name__ == "__main__":
    n = int(input().strip())
    orders=[[]for i in range(n)]
    for i in range(n):
        x,y=map(int,input().split())
        orders[i].append(x)
        orders[i].append(y)
    orde=[[]for i in range(n)]
    for i in range(n):
        orde[i].append(i+1)
        orde[i].append(orders[i][0]+orders[i][1])
    orde=sorted(orde,key=lambda item: item[1])
    for i in range(n):
        print(orde[i][0],end=" ")
    print()

