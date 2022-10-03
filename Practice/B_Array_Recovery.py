t = int(input())
for tc in range(t):
    n = int(input())
    d = [int(i) for i in input().split()]
    a = []
    a.append(d[0])
    flag = True
    for i in range(1, len(d)):
        x = d[i]+a[-1]
        y = a[-1]-d[i]
        # print(x, y)
        # if x == y:
        #     print(-1)
        # else:
        #     a.append(x)
        if y < 0 or x == y:
            a.append(max(x, y))
        else:
            print(-1)
            flag = False
            break
            
    if flag:
        for i in a:
            print(i, end = " ")
        print()
