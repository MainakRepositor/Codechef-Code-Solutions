for  _ in range(int(input())):
    s=input()
    s=list(s)
    i=0
    f=0
    while i<len(s):
        if s[i]=='1':
            f=1
            break
        i+=1
    
    if f==0:
        print('NO')
    else:
        st=i
        while st<len(s) and s[st]=='1':
            st+=1
        g=st
        fd=0
        while g<len(s):
            if s[g]=='1':
                fd=1
            g+=1
        if fd==1:
            print('NO')
        else:
            print('YES')
