t = int(input())
for tc in range(t):
    n = int(input())
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    if a == b:
        print(0)
        continue
    da, db = {}, {}
    for i in range(n):
        da[a[i]] = da.get(a[i], 0)+1
        db[b[i]] = db.get(b[i], 0)+1
    if da.get(1, 0) == db.get(1, 0) and da.get(0, 0) == db.get(0, 0):
        print(1)
        continue
    res = 0
    ta = sorted(a)
    tb = sorted(b)
    for i in range(n):
        # a[i] = 1-a[i]
        # res += 1
        # print("sorted a: ", sorted(a))
        # print("sorted b: ",sorted(b))
        # if a == b:
        #     print(res)
        #     break
        # elif sorted(a) == sorted(b):
        #     res += 1
        #     print(res)
        #     break
        if a[i] != b[i]:
            a[i] = 1-a[i]
            if a == ta:
                res += 1
                