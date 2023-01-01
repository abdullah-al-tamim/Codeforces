t = int(input())
for tc in range(t):
    n = int(input())
    l = [int(i) for i in input().split()]
    res = 0
    for i in range(1, 10-n):
        res += i*6
    print(res)