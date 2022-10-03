n = int(input())
lstl = []
lstr = []
l = {}
r = {}
for i in range(0 , n):
    x, y = map(int, input().split())
    lstl.append(x)
    lstr.append(y)
    l[x] = l.get(x, 0)+1
    r[y] = r.get(y, 0)+1
count = 0
# print(l)
# print(r)
for i in range(len(lstl)):
        count += r.get(lstl[i], 0)
print(count)
