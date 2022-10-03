from math import floor
x = int(input())
lst = [1, 2, 3, 4, 5]
i = 4
res = 0
while i >= 0:
    # print("i", i)
    if(x >= lst[i]):
        y = floor(x/lst[i])
        res += y
        x -= y*lst[i]
        # print(res , x)
        i -= 1
    else:
        i -= 1
print(res)