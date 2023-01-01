t = int(input())
for tc in range(t):
    n, k = map(int, input().split())
    l1 = [int(i) for i in input().split()]
    l2 = [int(i) for i in input().split()]
    l1.sort()
    l2.sort(reverse=True)
    sum = 0
    for i in range(k):
        if l2[i] > l1[i]:
            sum += l2[i]
        else:
            sum += l1[i]
    for i in range(k, n):
        sum += l1[i]
    print(sum)
        
    # print(l2)
