# works in python 2.7

nCr = [[0 for x in xrange(1001)] for x in xrange(1001)]
 
for i in range (0,1001):
    nCr[i][0]=1
    nCr[i][i]=1
for i in range (1,1001):
    for j in range (1,1001):
        if i!=j:
            nCr[i][j] = nCr[i-1][j] + nCr[i-1][j-1]
 
t=input()
for rajarshisarkar in range(0,t):
    s,n,m,k=map(int,raw_input().split(' '))
    foo=0.000000
    tot = float(nCr[s-1][n-1])
    if s==n:
            print"1.000000\n"
            continue
    if k>n:
            print"0.000000\n"
            continue
    if m>n:
        wola=n
    else:
        wola=m
    for i in range(k,wola):
        foo+= ((nCr[m-1][i])*(nCr[s-m][n-i-1]))
    print"%f\n"% (float(foo/tot))