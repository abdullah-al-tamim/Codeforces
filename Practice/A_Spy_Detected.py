t = int(input())
for tc in range(t):
    n = int(input())
    l = [int(i) for  i in input().split(' ')]
    temp = sorted(l)
    # temp.sort()
    # print(temp)
    # print(l)
    for i in range(n):
        if l[i] != temp[1]:
            print(i+1)
            break