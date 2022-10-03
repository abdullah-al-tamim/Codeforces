t = int(input())
for tc in range(t):
    c = 0
    l = []
    n = input()
    mod = "1"
    for i in range(1, len(n)):
        mod += "0"
    if int(n) <= 9 or int(n)%int(mod) == 0:
        print(1)
        print(n)
    else:
        for i in range(len(n)):
            if n[i] != '0':
                x = n[i]
                for j in range(1,  len(n)-i):
                    x += '0'
                l.append(x)
                n.replace(n[i], '')
        
        # l.append(int(n)-(int(n) % int(mod)))
        # n = str(int(n)-(int(n) % int(mod)))
        # while l[-1] > 9:
            # mod = "1"
            # for i in range(1, len(n)):
            #     mod += "0"
            # l.append(int(n)-(int(n) % int(mod)))
            # n = str(int(n)-(int(n) % int(mod)))
        print(len(l))
        for i in l:
            print(i, end = " ")
