
num = int(input())
root_num = int(num**1/2)+1
stack = list()

for i in range(root_num):
    stack.append(i+1)
    

for i in range(root_num):
    sub_num = stack.pop(0)
    if (num - sub_num) <=0:
        break
    num -= sub_num
ss_num =sub_num - (num - 1)
if sub_num %2 !=0:
    print(f"{ss_num}/{num}")
else:
    print(f"{num}/{ss_num}")