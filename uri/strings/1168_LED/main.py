dc = {}
dc[1], dc[2], dc[3], dc[4], dc[5] = 2, 5, 5, 4, 5
dc[6], dc[7], dc[8], dc[9], dc[0] = 6, 3, 7, 6, 6

n = int(input())
while n > 0:
    st = input()
    ans = 0
    for i in st:
        ans += dc[int(i)]
    print(str(ans) + " leds", sep='')
    n -= 1
