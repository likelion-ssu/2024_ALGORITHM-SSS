# def find_teammate(students):
#     queue = students.copy()

#     while len(queue) > 1:
#         for _ in range(int(queue[0][1]) - 1):
#             queue.append(queue.pop(1))

#         queue.pop(0)
#         queue.pop(0)

#     return queue[0][0]

# num = int(input())
# students = []
# for _ in range(num):
#     initial, student_number = input().split()
#     students.append((initial, student_number))

# teammate = find_teammate(students)
# print(find_teammate)

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