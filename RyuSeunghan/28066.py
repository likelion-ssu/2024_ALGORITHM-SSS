from collections import deque
num, k = map(int, input().split())
dq = deque()
for i in range(num):
    dq.append(i+1)

while len(dq) >= k :
    rel = dq.popleft()
    dq.append(rel)
    for i in range(k-1):
        dq.popleft()
print(dq.popleft())