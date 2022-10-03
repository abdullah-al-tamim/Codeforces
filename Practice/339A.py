str = input()
lst = []
for i in str:
    if i != '+':
        lst.append(i)
lst.sort()
for i in range(len(lst)):
    print(lst[i], end = "") 
    if(i != len(lst)-1):
        print('+', end = "")
    