from math import sqrt, pow
t = int(input())
for tc in range(t):
    a, b = map(int, input().split())
    mn, mx = min(a, b), max(a, b)
    print(int(max(mx*mx, pow(mn*2, 2))))