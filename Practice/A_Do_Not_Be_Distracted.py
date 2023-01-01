t = int(input())
for tc in range(t):
    n = int(input())
    str = input()
    d = {}
    for i in range(n):
        if d.get(str[i]) is not None and str[i] != str[i-1]:
            # print(d.get(str[i]))
            print("NO")
            break
        else:
            d[str[i]] = d.get(str[i], 0)+1
    else:
        print("YES")