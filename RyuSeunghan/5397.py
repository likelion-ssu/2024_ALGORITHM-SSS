from collections import deque
num = int(input())
for _ in range(num):
    pswd = deque()
    string = input()
    pos = 0
    for i in range(len(string)):
        if string[i] == "<":
            if pos > 0:
                pos -= 1
                release = pswd.pop()
                pswd.appendleft(release)
        elif string[i] == ">":
            if pos < (len(pswd)):
                pos += 1
                release = pswd.popleft()
                pswd.append(release)
        elif string[i] == "-":
            if pos > 0:
                pos-= 1
                pswd.pop()
        else:
            pos += 1
            pswd.append(string[i])
    length = len(pswd)
    for _ in range(length-pos):
        release = pswd.popleft()
        pswd.append(release)
    print(''.join(pswd))