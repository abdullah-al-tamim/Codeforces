n = int(input())
cm , cc = 0, 0
for i in range(n):
    m, c = map(int, input().split())

    if m > c:
        cm += 1
    elif m < c:
        cc += 1
if cm > cc:
    print("Mishka")
elif cm < cc:
    print("Chris")
else:
    print("Friendship is magic!^^")
        
