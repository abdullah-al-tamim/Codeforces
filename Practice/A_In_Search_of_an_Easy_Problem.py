n = int(input())
l = [int(i) for i in input().split()]
flag = 1
for i in l:
    if i == 1:
        print("HARD")
        flag = 0
        break
if flag:
    print("EASY")