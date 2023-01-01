t = int(input())
for tc in range(t):
    n , m = map(int, input().split())
    # if m == 1:
    #     print
    l = []
    for i in range(m):
        a, b = map(int, input().split())
        l.append((a, b))
    flag = 1
    mz , mo = -1, -1
    for i in range(m):
        if l[i][0]>mz:
            mz = l[i][0]
        if l[i][1]>mo:
            mo = l[i][1]
    if mz < n or len(l)<mz or mo < n or len(l) < mo:
        print("YES")
    else:
        print("NO")
    