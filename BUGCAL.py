
T = int(input())
for x in range(T):
    a,b = map(str, input().split())
    al = len(a)
    bl = len(b)
    m = max(al,bl)
    a = a.rjust(m,'0')
    b = b.rjust(m,'0')
    d = []
    for i in range(m):
        add = int(a[i])+int(b[i])
        d.append(str(add%10))
    ans = ''.join(d)
    print(int(ans))
