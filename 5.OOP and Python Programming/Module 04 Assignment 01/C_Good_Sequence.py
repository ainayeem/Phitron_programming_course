from collections import defaultdict
n=int(input())
arr=list(map(int,input().split()))
mp=defaultdict(int)

for v in arr:
    mp[v]+=1

sum=0
for key,value in mp.items():
    if value<key:
        sum+=value
    elif value>key:
        sum+=value-key
print(sum)