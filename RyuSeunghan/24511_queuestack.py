from collections import deque

n = int(input())
a_list = list(map(int,input().split())) # 스택 큐 여부
b_list = list(map(int,input().split())) # 자료구조 들어가 있는 원소
m = int(input())                      
c_list = list(map(int,input().split())) 

c_deque = deque(c_list)
# 복잡도 n -> 100 000
for i in range(n):
        #queue일 때 
        if not a_list[i]:
            c_deque.appendleft(b_list[i])
            c_deque.pop()
            #c_list = [b_list[i]] + c_list[:-1]

#복잡도 n -> 100 000
for i in range(m):
      print(c_deque[i], end=' ')