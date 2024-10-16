def recur_func(N):
    if N == 0:
        return
    
    print("HelloWorld")

    return recur_func(N-1)

N = int(input())
recur_func(N)