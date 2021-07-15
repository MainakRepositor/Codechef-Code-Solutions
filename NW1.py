# cook your dish here
t=int(input())
for i in range(t):
    n, day = input().split()
    l=["mon", "tues", "wed", "thurs", "fri", "sat", "sun"]
    d=[4,4,4,4,4,4,4] 
    n = int(n) - 28 
    r = l.index(day)
    for i in range(n):
        d[r%7] = 5 
        r += 1 
    print(d[0], d[1], d[2], d[3], d[4], d[5], d[6])
