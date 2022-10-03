t = int(input())
for tc in range(t):
    n, c = map(int, input().split())
    l = []
    l = [int(i) for i in input().split()]
    d = {}
    for i in range(n):
        d[l[i]] = d.get(l[i], 0)+1
    res = 0
    lst = list(d.values())
    # print(lst)
    for i in range(len(d)):
        # print(i)
        if(lst[i] >= c):
            res += c
        else:
            res += lst[i]
    print(res)
    # print("break")