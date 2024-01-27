from collections import deque
string = input()
num = len(string)
brasket_input = deque()
brasket_left = 0
brasket_right = 0
for i in range(num):
    brasket_input.append(string[i])
for i in range(num):
    brasket = brasket_input.popleft()
    if brasket ==")":
        if brasket_left >= 1 :
            brasket_left -= 1
        else :
            brasket_right += 1
    # brasket == "("
    else:
        brasket_left += 1
print(brasket_left + brasket_right)