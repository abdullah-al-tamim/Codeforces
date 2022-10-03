t = int(input())
for tc in range(t):
    s = input()
    l = []
    for i in s:
        if(i > s[0]):
            l.append(min(int(i)+1, 9))
        else:
            l.append(int(i))
        s.replace('i', '')
    l.sort()
    for i in range(len(l)):
        print(l[i], end = '')
    print()
