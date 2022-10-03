n = int(input())
l = [int(i) for i in input().split()]
count = 0
for i in l:
    count += (i/n)
print(count)