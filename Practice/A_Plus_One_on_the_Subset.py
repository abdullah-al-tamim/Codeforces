t = int(input())
for tc in range(t):
    n = int(input())
    l = [int(i) for i in input().split()]
    mx = max(l)
    mx_diff = -1
    for i in l:
        if mx - i > mx_diff:
            mx_diff = mx - i
    print(mx_diff)