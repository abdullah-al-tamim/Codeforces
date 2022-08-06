n = int(input())
matrix = []
# For user input
for i in range(n):          # A for loop for row entries
    a = []
    for j in range(3):      # A for loop for column entries
        a[j] = (input())
    matrix.append(a)
ans = 0
for i in range(0, n):
    count = 0
    for j in range(0, 3):
        if matrix[i][j] == 1:
            count += 1
    if count > 1:
        ans += 1
print(ans)
