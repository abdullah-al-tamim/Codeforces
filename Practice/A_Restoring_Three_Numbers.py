l = [int(i) for i in input().split()]
l.sort()
c = l[3]-l[0]
a = l[3]-l[2]
b = l[3]-l[1]
print(a,b,c)
