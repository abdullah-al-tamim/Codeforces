t = int(input())
for tc in range(t):
    n = int(input())
    res = 0
    val = 0
    for i in range(n):
        val += 1
        while val%3 == 0 or val%10 == 3:
            val += 1
    print(val)