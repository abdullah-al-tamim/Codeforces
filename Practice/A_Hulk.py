n = int(input())
str = ""
if(n%2 == 0):
    for i in range(1, n, 1):
        if(i%2 == 1):
            str += "I hate that "
        else:
            str += "I love that "
    str += "I love it"
    print(str)
else:
    for i in range(1, n, 1):
        if(i % 2 == 1):
            str += "I hate that "
        else:
            str += "I love that "
    str += "I hate it"
    print(str)
