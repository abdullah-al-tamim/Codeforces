str = input()
dict = {}
for i in str:
    dict[i] = dict.get(i, 0) + 1
if len(dict) % 2 == 1:
    # print(len(dict))
    print("IGNORE HIM!")
else:
    print("CHAT WITH HER!")