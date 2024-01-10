#open -> 닫히지 않은 열린 괄호 개수 sum -> 현재 잘린 막대 수
open= 0
sum = 0

#input string -> 입력 괄호열, max -> 입력 괄호열 개수
input_string = input()
input_string = list(input_string)
max = len(input_string)

#"("일시 2가지 케이스 -> 열리는 막대기일 경우 / 레이저일 경우
# 열리는 막대기일 경우 "(" 다음 문자열이 "(" -> open + 1
# 레이저일 경우 "(" 다음 문자열이 ")" -> sum += open, 다음문자열을 ")"로 인식하기에 미리 ")"를 "0"으로 변환
#")"일시 -> open -= 1, sum += 1
for i in range(max):
    if input_string[i] == "(":
        if i+1 <= max and input_string[i+1] ==")":
            sum += open
            input_string[i+1] = "0"
        else:
            open += 1
    elif input_string[i] == ")":
        open -= 1
        sum += 1
print(sum)

