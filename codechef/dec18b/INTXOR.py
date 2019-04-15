def find4(k, s, t, r):
    a = k ^ r ^ t
    b = k ^ s ^ r
    c = k ^ s ^ t 
    d = s ^ r ^ t
    return (a, b, c, d)


def find5(k, s, t, r, w):
    a = s ^ t ^ w
    b = k ^ t ^ r
    c = s ^ r ^ w
    d = k ^ t ^ w
    e = k ^ s ^ r
    return (a, b, c, d, e)


def strategy(N):
    sol = []
    fours = N // 4 - N % 4
    fives = N // 4 - fours
    for i in range(1, fours*4 + 1, 4):
        # a ^ b ^ c
        print(1, i, i + 1, i + 2)
        k = int(input())
        # b ^ c ^ d
        print(1, i + 3, i + 1, i + 2)
        s = int(input())
        # c ^ d ^ a 
        print(1, i, i + 3, i + 2)
        t = int(input())
        # d ^ a ^ b 
        print(1, i, i + 1, i + 3)
        r = int(input())

        for k in find4(k, s, t, r):
            sol.append(k)

    for i in range(fours*4 + 1, fours*4 + 5*fives + 1, 5):
        # a ^ b ^ c
        print(1, i, i + 1, i + 2)
        k = int(input())
        # b ^ c ^ d
        print(1, i + 3, i + 1, i + 2)
        s = int(input())
        # c ^ d ^ e
        print(1, i + 2, i + 3, i + 4)
        t = int(input())
        # d ^ e ^ a 
        print(1, i + 3, i + 4, i)
        r = int(input())
        # e ^ a ^ b 
        print(1, i + 4, i, i + 1)
        w = int(input())

        for k in find5(k, s, t, r, w):
            sol.append(k)

    print('2 ' + ' '.join(map(str, sol)))


for _ in range(int(input())):
    N = int(input())
    
    strategy(N)
    a = int(input())
    if a == -1:
        exit()
    if a == 1:
        continue

