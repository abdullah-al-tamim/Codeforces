s = input()
t = input()
if t[::-1] != s[::+1]:
    print("NO")
    quit()
print("YES")
