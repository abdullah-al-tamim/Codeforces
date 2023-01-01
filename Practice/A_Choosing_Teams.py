n , k = map(int, input().split())
l = [int(i) for i in input().split()]
c = 0
res = 0
for i in l:
    if i+k <= 5:
        c += 1
        if c == 3:
            c = 0
            res += 1
print(res)