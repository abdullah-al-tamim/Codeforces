k , r = map(int, input().split())
x = k%10
i = 1
# print((k*i)%10)
while (k*i)%10 != r and (k*i)%10 != 0:
    i += 1
    # print("h")
    # x *= i
print(i)
# print(int((x*i)/r))