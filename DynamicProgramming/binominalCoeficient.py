def naive_binomial(n,k):
    if k==0 or k==n:
        return 1
    return naive_binomial(n-1,k-1)+naive_binomial(n-1,k)
def binomail_DP(n,k):
    c=[]
    for i in range(n+1):
        c.append([])
    for i in range(n+1):
        for j in range(k+1):
            c[i].append(0)
    for i in range(n+1):
        for j in range(min(k+1,i+1)):
            if j==0 or j==i:
                c[i][j]=1
            else:
                c[i][j]=c[i-1][j-1]+c[i-1][j]
    print(c[n][k])
    return c[n][k]
print(naive_binomial(5,2))
print(binomail_DP(5,2))
