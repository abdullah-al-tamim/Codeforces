t = int(input())
for tc in range(t):
    n = int(input())
    l1 = [int(i) for i in input().split()]
    l2 = [int(i) for i in input().split()]
    
    print(sum(l1)+sum(l2)-max(l2))