t = int(input())
for tc in range(t):
    n = int(input())
    l = int(n/2)+1
    j = 1
    for i in range(1, l):
        print(i, n-i+1, end=" ")

    if n % 2 == 1:
        print(l, end=" ")
    print()
