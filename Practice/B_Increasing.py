t = int(input())
for tc in range(t):
    n = int(input())
    l = [int(i) for i in input().split()]
    d = {}
    for i in l:
        d[i] = d.get(i, 0)+1
    if len(d) == n:
        print('YES')
    else:
        print('NO')