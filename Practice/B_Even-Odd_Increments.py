t = int(input())
for tc in range(t):
    n , q = map(int, input().split())
    l = [int(i) for i in input().split()]
    oc = 0
    ec = 0
    esum , osum = 0, 0
    for j in range(n):
        if l[j] % 2 == 0:
            ec += 1
            esum += l[j]
        else:
            oc += 1
            osum += l[j]
    
    for i in range(q):
        op , xj = map(int, input().split())
        if op == 0:
            esum += (ec*xj)
            if xj %2 == 1:
                oc += ec
                ec -= ec
            print(esum+osum)
        else:
            osum += (oc * xj)
            if xj % 2 == 1:
                ec += oc
                oc -= oc
            # print(osum, esum)
            print(osum+esum)
    
                    