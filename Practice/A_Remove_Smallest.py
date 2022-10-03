t = int(input())
for tc in range(t):
    n = int(input())
    l = [int(i) for i in input().split()]
    if n == 1:
        print("YES")
    else:
        flag = True
        l.sort()
        for i in range(1, n):
            if abs(l[i] - l[i-1]) > 1:
                print("NO")
                flag = False
                break
        if flag:
            print("YES")