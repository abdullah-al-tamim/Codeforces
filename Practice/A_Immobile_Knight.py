t = int(input())
for tc in range(t):
    n, m = map(int, input().split())
    if n <= 1 or m <= 1:
        print(n, m)
    elif n <= 3 and m <= 3:
        print(2, 2)
    else:
        print(n, m)
