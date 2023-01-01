t = int(input())
for tc in range(t):
    n = int(input())
    l = []
    for i in range(1, int(n/2)+1):
        l.append(int(n/2)+i)
        l.append(i)
    if n%2 == 1:
        l.append(n)
    for i in l:
        print(i , end = " ")
    print()