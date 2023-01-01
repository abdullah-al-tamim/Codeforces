t = int(input())
for tc in range(t):
    n = int(input())
    if int(n/2) %2 == 1:
        print("NO")
    else:
        print("YES")
        i = 2
        for i in range(2, n+1, +2):
            print(i, end = " ")
        temp = i
        for i in range( 1 , n-1, +2):
            print(i, end = " ")
        print(temp+int(n/2)-1, end = " ")
        print()
        
