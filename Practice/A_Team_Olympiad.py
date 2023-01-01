n = int(input())
l = [int(i) for i in input().split()]
d = {}
res = []
for i in range(1, 5):
    res.append([])
for i in range(n):
    d[l[i]] = d.get(l[i], 0)+1
    # print(l[i])
    res[l[i]].append(i+1)
# print(d)
ans = min(d.get(1, 0), min(d.get(2, 0), d.get(3, 0)))
print(ans)
# print(res)
for i in range(ans):
    for j in range(1, 4):
        print(res[j][i], end = " ")
    print()

