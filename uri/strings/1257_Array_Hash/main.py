n = int(input())
while n > 0:
    l = int(input())
    str = []
    for nl in range(0, l):
        str.append(input())
    ans = 0
    for i in range(len(str)):
        for pos in range(len(str[i])):
            ans += (ord(str[i][pos]) - ord('A')) + i + pos

    print(ans)
    n -= 1
