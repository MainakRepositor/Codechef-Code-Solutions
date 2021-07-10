s=input()
n=int(input())
for i in range(n):
    w=input()
    if all([i in s for i in w]):
        print("Yes")
    else:
        print("No")
