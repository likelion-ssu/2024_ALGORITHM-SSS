num, a, b = map(int, input().split())
count = 0
while a!=b:
    a = (a+1) // 2
    b = (b+1) // 2
    count += 1
print(count)