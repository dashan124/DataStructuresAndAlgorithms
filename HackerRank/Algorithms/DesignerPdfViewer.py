
import sys


#h = list(map(int, input().strip().split(' ')))
#word = input().strip()
size = [int(i) for i in input().split()]
word = [size[ord(c)-ord('a')] for c in input()]
print(max(word)*len(word))
    
