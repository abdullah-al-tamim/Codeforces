t =int(input())
for tc in range(t):
    str = input()
    val = 0
    if len(str) == 1:
        val = 1
    elif len(str) == 2:
        val = 3
    elif len(str) == 3:
        val = 6
    elif len(str) == 4:
        val = 10
    print((int(str[0])-1)* 10 +val)