n, m = map(int, input().split())
arr = list(map(int, input().split()))
arr.insert(0,0)
count = 0
start = 0
end = 1

for i in range(n):
    arr[i+1] += arr[i]

while end < n+1:
    if start == end:
        end += 1
    elif arr[end] - arr[start] < m :
        end += 1
    elif arr[end] - arr[start] == m:
        count += 1
        end += 1
    elif arr[end] - arr[start] > m:
        start += 1

print(count)