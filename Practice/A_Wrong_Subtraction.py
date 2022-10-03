from math import floor
n, k = map(int, input().split())
res = 0
while k > 0:
    k-=1
    if n%10 != 0:
        n -= 1
    else:
        n = floor(n/10)
print(n)