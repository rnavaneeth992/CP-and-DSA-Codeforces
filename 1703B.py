t=int(input())
for k in range(0,t,1):
    n=int(input())
    s=input()
    f=[]
    for i in range(0,26,1):
        f.append(-1)
    r=0
    for i in range(0,n,1):
        if f[ord(s[i])-65]==-1:
            r=r+2
            f[ord(s[i])-65]=1
        else:
            r=r+1
    print(r)
