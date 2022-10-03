str = input()
str = str.replace(', ', '')
str = str.replace('{', '')
str = str.replace('}', '')
d= {}
for i in str:
    d[i] = d.get(i, 0) + 1
print(len(d))