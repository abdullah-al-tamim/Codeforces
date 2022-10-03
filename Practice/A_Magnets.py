n = int(input())
c = 1
l = []
for i in range(n):
    l.append(int(input()))
for i in range(0, n-1, 1):
    if l[i] != l[i+1]:
        c+=1
print(c)