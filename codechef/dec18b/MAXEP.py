N, c = list(map(int, input().split()))
    
M = [-1 for i in range(N+1)]

C = 1000

# REFACTOR ME!!!
if N == 1: 
    print("3 1")
else:
    left = 1
    right = N
    t = C//c
    while True:
        if t < 0:
            break
        k = int((right - left + 1)//(2**t))
        if k > right or k < left or k < 1:
            break
        t -= 1
        if M[k] != -1:
            a = M[k]
        else:
            C -= 1
            print(1, k)
            a = int(input())
            M[k] = a
        if a == 0:
            left = k 
        elif a == 1:
            C -= c
            print(2)
            right = k
        if (right - left + 1) <= C:
            break
    while True:
        cur = left + (right - left + 1)//2
        if (right - left + 1) <= C:
            for i in range(left, right+1):
                if M[i] == 1:
                    print(3, i)
                    exit(0)
                elif M[i] == 0:
                    continue
                C -= 1
                print(1, i)
                a = int(input())
                if a == 1:
                    print(3, i)
                    exit(0)
        else:
            if (right - left) == 1:
                if M[left] == 0:
                    cur = right
                    break
                if M[left] == 1:
                    cur = left
                    break
            if M[cur] != -1:
                a = M[cur]
            else:
                print(1, cur)
                C -= 1
                a = int(input())
                M[cur] = a
            if a == 1:
                C -= c
                print(2)
                right = cur
                cur = right - (right - left + 1)//2
            elif a == 0:
                left = cur
                cur = left + (right - left + 1)//2  
            if (right == left):
                break
    print("C", C)
    print(3, cur) 
