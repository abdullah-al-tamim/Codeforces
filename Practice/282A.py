n = int(input())
x = 0
lst = []
for i in range(n):
    ele = input()
    lst.append(ele)
for i in lst:
    if i[1] == '+':
        x += 1
    else:
        x -= 1
    # print(i)
print(x)