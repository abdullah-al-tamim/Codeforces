t = int(input())
for tc in range(t):
    n = int(input())
    l = [int(i) for i in input().split()]
    str = input()
    d = {}
    for i in range(n):
        d[l[i]] = str[i]
    flag = True
    for i in range(n):
        if d[l[i]] != str[i]:
            print("NO")
            flag = False
            break
    if flag:
        print('YES')