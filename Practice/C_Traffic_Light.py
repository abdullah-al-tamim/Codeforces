t = int(input())
for tc in range(t):
    n, current = (input().split(" "))
    n = int(n)
    str = input()
    gind = -1
    glind = -1
    cind = -1
    clind = -1
    for i in range(n):
        if str[i] == 'g' and gind == -1:
            gind = i+1
        if str[i] == current and cind == -1:
            cind = i+1
        
    res = 0
    for i in range(n-1, -1, -1):
        if str[i] == 'g' and clind != -1:
            break
        if str[i] == current:
            clind = i+1
    for i in range(n-1, -1, -1):
        if str[i] == current and glind != -1:
            break
        if str[i] == 'g':
            glind = i+1
    # for i in range(n):
    #     if str[i] == current and gind > i+1:
    #         res  = max(res, gind - i+1)
    #         print(res, "1", gind-i+1)
    #     if str[i] == current and glind < i+1:
    #         res = max(res, (n-i+1)+gind)
    #         print(res, "2", (n-i+1)+gind)
    if  gind > cind and cind != -1:
        res = max(res, gind - cind)
        # print(res, "1", gind-cind)
    if glind < clind:
        res = max(res, (n-clind)+gind)
        # print(res, "2", (n-clind)+gind)
    if glind > clind:
        res = max(res, glind-clind)
    print(res)
