l = [int(i) for i in input().split(" ")]
count = 0
d = {}
for i in l:
    d[i] = d.get(i, 0)+1
print(int(4-len(d)))
