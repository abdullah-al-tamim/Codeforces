n = int(input())
x = [int(i) for i in input().split()]
y = [int(i) for i in input().split()]
d = {}
for i in range(1, len(x)):
    d[x[i]] = d.get(x[i], 0)+1
for i in range(1, len(y)):
    d[y[i]] = d.get(y[i], 0)+1
if len(d) == n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")
