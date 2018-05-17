def CountSetsRecr(arr,total): #no of subsets that is the answer
    return rec(arr,total,len(arr)-1)
def rec(arr,total,i):
    if total==0:
        return 1 #only subet is {} empty subet
    elif total<0:
        return 0 #since no negative no is in the array
    elif i<0:
        return 0
    elif total<arr[i]:
        return rec(arr,total,i-1)
    else:
        return rec(arr,total-arr[i],i-1)+rec(arr,total,i-1)

def count_sets_dp(arr,total):
    mem={}
    return dp(arr,total,len(arr)-1,mem)
def dp(arr,total,i,mem):
    key=str(total)+':'+str(i)
    if key in mem:
        return mem[key]
    if total==0:
        return 1
    elif total<0:
        return 0
    elif i<0:
        return 0
    elif total<arr[i]:
        to_return=dp(arr,total,i-1,mem)
    else:
        to_return=(dp(arr,total-arr[i],i-1,mem)+dp(arr,total,i-1,mem))
    mem[key]=to_return
    return to_return
print("Enter the no of elements :")
n=int(input())
print("Enter a array")
arr=list(map(int,input().split()))
print("give sum to find the no of subsets that having total is ")
total=int(input())
print(CountSetsRecr(arr,total))
print(count_sets_dp(arr,total))
