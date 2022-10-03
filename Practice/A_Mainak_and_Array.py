t = int(input())
for tc in range(t):
    n = int(input())
    lst = [int(i) for i in input().split()]
    ans = max(lst[-1]-min(lst), max(lst)-lst[0])
    for i in range(n):
        ans = max(ans, lst[i-1]-lst[i])
    print(ans)