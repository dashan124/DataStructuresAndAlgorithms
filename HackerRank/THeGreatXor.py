
import sys

t=int(input().strip())
for _ in range(t):
  n=int(input().strip())
  lower="{0:b}".format(n)
  upper="1"*len(lower)
  print(int(upper,2)-int(lower,2))