# N을 입력받는다.

# 재귀함수 1
# input : N
# output : 1 ~ N까지 숫자 차례대로 

# 재귀함수 2
# input : N
# output : N ~ 1

def recur_1(N):
    if N == 0:
        return
    recur_1(N-1)
    print(N, end=" ")

def recur_2(N):
    if N == 0:
        return 
    print(N, end=" ")
    recur_2(N-1)

N = int(input())
recur_1(N)
print()
recur_2(N)