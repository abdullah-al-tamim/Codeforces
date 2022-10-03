t = int(input())
for tc in range(t):
    str = input()
    n = len(str)
    temp = ""
    print(str[0], end = "")
    i = 2
    while i < n:
        print(str[i], end = "")
        i += 2
    print(str[n-1])    