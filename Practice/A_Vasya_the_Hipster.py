from math import floor

a, b = map(int, input().split())
print(min(a, b), int(abs(a-b)/2))
