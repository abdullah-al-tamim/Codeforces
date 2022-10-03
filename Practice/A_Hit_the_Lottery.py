n = int(input())
l = [1, 5, 10, 20, 100]
num = 0
i = 4
while n!= 0:
    if l[i] <= n:
        x = int(n/l[i])
        num += x
        n -= int(l[i]*x)
    else:
        i -= 1
print(num)