def lon(arr,n):
    l=[1]*n
    for i in range(1,n):
        for j in range(i):
            if arr[i]>arr[j] and l[i]<l[j]+1:
                #print(arr[i],arr[j])
                l[i]=l[j]+1
                #print(l)
    return max(l)
n=int(input())
arr=list(map(int,input().split()))
print(lon(arr,n))
