t = int(input())
for tc in range(t):
    n = int(input())
    str = input()
    l = []
    for i in range(n):
        if str[i] == 'L':
            l.append(i)
        else:
            l.append((n-i-1))
    l.sort()
    s = sum(l)
    for i  in range(n):
        current = l[i]
        reversed = n-current-1
        if reversed > current:
            s = s - current + reversed
        print(s, end=" ")
    print()