num = int(input())
queue = []
for i in range(num):
    queue.append(tuple(input().split()))
while len(queue) > 1:
    for j in range(int(queue[0][1])-1):
        release = queue.pop(1)
        queue.append(release)
    queue.pop(0)
    queue.pop(0)
print(queue.pop(0)[0])