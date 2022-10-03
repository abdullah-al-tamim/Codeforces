k, n, w = map(int, input().split())
tot = 0
while w != 0:
    tot += (k*w)
    w -= 1
if tot<= n:
    print(0)
else:
    print(tot-n)