n = int(input())
str = input()
d = {}
str = str.lower()
for i in str:
    d[i] = d.get(i, 0) + 1
if len(d) == 26:
    print("YES")
else:
    print("NO")