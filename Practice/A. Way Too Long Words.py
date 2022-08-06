t = int(input())
while t > 0:
    t = t-1
    str = input()
    if(len(str) < 11):
        print(str)
    else:
        print(f'{str[0]}{len(str)-2}{str[-1]}')