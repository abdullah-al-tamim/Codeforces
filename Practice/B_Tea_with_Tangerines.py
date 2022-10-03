# find the min
# go through the list and check whether the elements are bigger than twice of the minimum
from math import ceil
t = int(input())
for tc in range(t):
    n = int(input())
    l = [int(i) for i in input().split()]
    c = 0
    mn = min(l)
    for i in l:
        if mn == 1:
            c += i-1
        else:
            c += int((i-1)/(2*mn - 1))
    print(c)
