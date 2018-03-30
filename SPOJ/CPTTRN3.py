t=int(input())
for i1 in range(t):
    r,c=map(int,input().split())
    cout=(r+1)+(r*2)
    for i in range(cout):
        s="*"
        for j in range(c):
            s+=("..*")
        if i%3==0:
            x=len(s)
            print(("*")*x)
        else:
            print(s)
    
