a, b = map(int, input().split(" "))
# print(a, b)
x = 0
while a <= b:
    x += 1
    a *= 3
    b *= 2
print(x)