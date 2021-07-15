for i in range(int(input())):
    n=list(input())   #input character stream
    n1=[] #define an empty list
    for i in n:
        n1.append(n.count(i))
    if(max(n1)==len(n)/2): #if max occuring chars is 1/2 length of string
        print("YES")
    else:
        print("NO")
