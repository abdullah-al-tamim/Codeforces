t = int(input())
for tc in range(t):
    n =  int(input())
    if n == 2:
        print(2, 1)
    elif n <= 3:
        print(-1)
    else:
        if n%2 == 1:
            for i in range(n, int(n/2)+1, -1):
                print(i, end=' ')
            for i in range(1, int(n/2)+2):
                print(i, end=' ')
            print()
        else:
            for i in range(n, int(n/2), -1):
                print(i, end=' ')
            for i in range(1, int(n/2)+1):
                print(i, end=' ')
            print()
        # l[lmid], l[mid] = l[mid], l[lmid]
        