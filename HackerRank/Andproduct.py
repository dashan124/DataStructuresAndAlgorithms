import sys

def andProduct(a, b):
    # Complete this function
    ans=a^b
    po=1
    while po*2<=ans:
        po=po*2
    return (a&(~(po-1)))
    
if __name__ == "__main__":
    n = int(input().strip())
    for a0 in range(n):
        a, b = input().strip().split(' ')
        a, b = [int(a), int(b)]
        result = andProduct(a, b)
        print(result)
