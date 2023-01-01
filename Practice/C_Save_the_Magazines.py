t = int(input())
for tc in range(t):
    n = int(input())
    str = input()
    l = [int(i) for i in input().split()]
    d = {}
    for i in range(n):
        d[l[i]] = d.get(l[i], i)
    temp = l
    temp.sort()
    # print(temp)
    onecount = 0
    for i in str:
        if i == 1:
            onecount += 1
    sum = 0
    for i in range(n-1, -1, -1):
        if str[d[temp[i]]] == '1':
            print("if ind: " ,d[temp[i]])
            sum += temp[i]
            # str[d[temp[i]]] = '0'
            str = str[:d[temp[i]]]+'0'+str[d[temp[i]]]
        elif d[temp[i]]+1 < n and str[d[temp[i]]+1] == '1':
            # print("elif ind: " ,d[temp[i]])
            sum += temp[i]
            # str[d[temp[i]]+1] = '0'
    print(sum)