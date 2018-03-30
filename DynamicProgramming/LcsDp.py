def Lcs(x,y,m,n):
    L=[[0]*(n+1) for j in range(m+1)]
    for i in range(m+1):
        for j in range(n+1):
            if i==0 or j==0:
                L[i][j]=0
            elif x[i-1]==y[j-1]:
                L[i][j]=L[i-1][j-1]+1
            else:
                L[i][j]=max(L[i-1][j],L[i][j-1])
    print(L)
    return L[m][n]
print("Enter two strings")
x=input().strip()
y=input().strip()
m=len(x)
n=len(y)
print(Lcs(x,y,m,n))
