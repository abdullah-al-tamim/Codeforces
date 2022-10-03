from re import I


n = int(input())
l = [int(i) for i in input().split()]
count = 0
mn = l[0]
mx = l[0]
for i in l:
    if i < mn:
        mn = i
        count += 1
    if i > mx:
        mx = i
        count += 1
print(count)