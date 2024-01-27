import sys
stack =[]
result = 0
str = sys.stdin.readline().strip()
for i in str:
    if i == '+':
        a = stack.pop()
        b = stack.pop()
        stack.append(a+b)
    elif i == '-':
        a = stack.pop()
        b = stack.pop()
        stack.append(b-a)
    elif i == '*':
        a = stack.pop()
        b = stack.pop()
        stack.append(a*b)
    elif i == '/':
        a = stack.pop()
        b = stack.pop()
        stack.append(b//a)
    else:
        stack.append(int(i))
print(stack[0])
    
