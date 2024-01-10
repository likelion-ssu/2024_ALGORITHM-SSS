#딱히 로직 설명할 필요 없이 큐 통해서
#0일시 pop 아닐 append 해줬습니다
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