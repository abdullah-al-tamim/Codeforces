t = int(input())
for tc in range(t):
    n = int(input())
    for i in range(n-3, 1, -1):
        print(i, end = " ")
    print(n-2, "1" , n-1, n)