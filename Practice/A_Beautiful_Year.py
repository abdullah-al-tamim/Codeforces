n = int(input())
for i in range(n+1, 10000, +1):
    d = {}
    temp = str(i)
    for j in temp:
        d[j] = 1
    # print(len(d))
    # print(temp)
    if(len(d) == 4):
        print(temp)
        quit()