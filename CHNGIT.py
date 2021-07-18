t=int(input())
for i in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    r=max(set(l),key=l.count)
    print(len(l)-(l.count(r)))
