t = int(input())
for tc in range(t):
    a, b = map(str, input().split())
    da , db = {}, {}
    for i in a:
        da[i] = da.get(i, 0) + 1
    for i in b:
        db[i] = db.get(i, 0) + 1
    if da.get('S') and db.get('S'):
        if da.get('X', 0) < db.get('X', 0):
            print('>')
        elif da.get('X', 0) > db.get('X', 0):
            # print(a, b)
            print('<')
        else:
            print('=')
    elif da.get('L') and db.get('L'):
        if da.get('X', 0) < db.get('X', 0):
            print('<')
        elif da.get('X', 0) > db.get('X', 0):
            # print(a, b)
            print('>')
        else:
            print('=')
    elif da.get('S') and (db.get('M') or db.get('L')):
        print('<')
    elif db.get('S') and (da.get('M') or da.get('L')):
        print('>')
    elif da.get('M') and db.get('L'):
        print('<')
    elif db.get('M') and da.get('L'):
        print('>')
    elif a == b:
        print('=')
    
    # elif 
        
