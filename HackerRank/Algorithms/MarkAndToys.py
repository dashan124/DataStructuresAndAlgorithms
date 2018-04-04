
import sys

def maximumToys(prices, k):
    s=0
    count=0
    for i in range(len(prices)):
        if (s+prices[i])<=k:
            s+=prices[i]
            count+=1
    return count
if __name__ == "__main__":
    n, k = input().strip().split(' ')
    n, k = [int(n), int(k)]
    prices = list(map(int, input().strip().split(' ')))
    prices.sort()
    result = maximumToys(prices, k)
    print(result)
