n = int(input())
str = input()
ca = 0
cd = 0
for i in str:
    if i == 'A':
        ca += 1
    else:
        cd += 1
# print(d['A'])
# print(d['D'])

if(ca > cd):
    print("Anton")
elif(cd > ca):
    print("Danik")
else:
    print("Friendship")
