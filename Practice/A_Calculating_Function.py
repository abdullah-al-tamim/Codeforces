from math import ceil
n = int(input())
if n%2 == 0:
    print(int(ceil(n/2)))
else:
    print(-1*int(ceil(n/2)))