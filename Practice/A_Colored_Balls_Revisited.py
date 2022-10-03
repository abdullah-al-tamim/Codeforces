t = int(input())
for z in range(t):
    n = int(input())
    lst = [int(i) for i in input().split(" ")]
    ind = 0
    for i in range(n):
        if lst[i] >= lst[ind]:
            ind = i
    print(ind+1)