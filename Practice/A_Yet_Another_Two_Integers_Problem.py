t = int(input())
for tc in range(t):
    a, b = map(int, input().split())
    l = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
    c = 0
    if a > b:
        for i in l:
            if (a-b) >= i:
                x = int((a-b)/i)
                a -= i*x
                c += x
                # print('a, b: ', a, b)
                # print("c: ", int(a-b)/i)
    elif a < b:
        for i in l:
            if (b-a) >= i:
                y = int((b-a)/i)
                b -= i*y
                c += y
    print(c)