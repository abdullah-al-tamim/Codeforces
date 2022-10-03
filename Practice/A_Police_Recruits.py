n = int(input())
l = [int(i) for i in input().split()]
c = 0
s = 0
for i in l:
    if i == -1 and s <= 0:
        c += 1
    if i > 0 and s < 0:
        # s = 0
        s += abs(s)
        s += (i)
    else:
        s += i
    
print(c)  
        