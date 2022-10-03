n, m = map(int, input().split())
str = ""
for i in range(n):
    if i % 2 == 0:
        for j in range(m):
            str += "#"
    else:
        if i > 2 and str[len(str)-1-m] == '#':
            str += "#"
            for j in range(1, m):
                str += "."
        else:
            for j in range(0, m-1):
                str += "."
            str += "#"
# print(str)
for i in range(n*m):
    # for j in range(m):
    print(str[i], end='')
    if (i+1)%m == 0:
        print("")