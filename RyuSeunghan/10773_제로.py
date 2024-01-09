k = int(input("input nums"))
queue = list()
sum = 0
for i in range(k):
    num = int(input())
    if num != 0:
        queue.append(num)
    else :
        queue.pop()
while queue :
    sum += queue.pop()
print(sum)