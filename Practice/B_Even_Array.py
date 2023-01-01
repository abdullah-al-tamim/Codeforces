from collections import deque
t = int(input())
for tc in range(t):
    n = int(input())
    l = [int(i) for i in input().split()]
    oc , ec = 0, 0
    move = 0
    for i in range(n):
        if l[i]%2:
            oc += 1
        else: ec += 1
        if i%2 != l[i]%2:
            move += 1
    if n%2 ==0 and oc != ec:
        print(-1)
    elif n%2 == 1 and oc+1 != ec:
        print(-1)
    else: 
        print(int(move/2))