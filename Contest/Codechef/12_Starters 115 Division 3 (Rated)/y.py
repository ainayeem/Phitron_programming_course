t=int(input())
for _ in range(t):
    g,b=map(int,input().split())
    if b==0:
        print(*range(1,g+1))
        continue
    if g-b<=1:
        print("-1")
        continue
    a=g-1-b
    b=g+1-a
    print(b,end=" ")
    h=1
    for j in range (1,g):
        if j==b:
            h+=1
        print(h,end=" ")
        h+=1
    print()