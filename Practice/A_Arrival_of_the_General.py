n = int(int(input()))
l = [int(i) for i in input().split()]
count = 0
mn = -1
mx = -1
flag = 1
for i in range(n):
    if l[i] == min(l):
        mn = i
    if l[i] == max(l) and flag:
        mx = i
        flag = 0 
# print(mx, n-mn-1)
if mn > mx:
    print(mx + n-mn-1)
else:
    print(mx + n-mn-2)
    
    