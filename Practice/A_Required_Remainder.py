from math import floor
t = int(input())
for tc in range(t):
    x, y, n = map(int, input().split())
    res = n - (n%x) + y
    if res > n:
        res = n - (n%x) - (x-y)
    print(res)