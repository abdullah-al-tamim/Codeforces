n , k = map(int, input().split())
a = [int(i) for i in input().split(" ")]
c = 0
for i in a:
    if i >= a[k-1] and i > 0:
        c += 1
print(c)