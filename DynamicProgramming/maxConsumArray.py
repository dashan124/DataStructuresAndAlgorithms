def maxSum(arr,n):
    max_so_far=0
    max_ending_here=0
    for i in range(n):
        max_ending_here=max_ending_here+arr[i]
        if max_ending_here<0:
            max_ending_here=0
        if max_so_far<max_ending_here:
            max_so_far=max_ending_here
    return max_so_far
n=int(input())
arr=list(map(int,input().split()))
print(maxSum(arr,n))
