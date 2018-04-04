import sys

def angryChildren(k, arr):
    # Complete this function
    arr.sort()
    x=[]
    for i in range(len(arr)):
        y=[]
        for j in range(k):
            y.append(arr[j])
        x.append(max(y)-min(y))
    return min(x)
if __name__ == "__main__":
    n=int(input())
    k=int(input())
    ls=sorted([int(input()) for i in range(n)])
    mnt=ls[-1]-ls[0]
    for i in range(n-k+1):
        #seg=ls[i:i+k]
        a=ls[i]
        b=ls[i+k-1]
        d=b-a
        if d<mnt:
            mnt=d
    print(mnt)
