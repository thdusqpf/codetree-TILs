def func(N):
    if N == 1 or N == 2:
        return N

    return func(N // 3) + func(N - 1)

N = int(input())
print(func(N))