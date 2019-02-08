n = int(input())

while n > 0:
    x = int(input())
    n -= 1
    if x == 0:
        print("NULL")
        continue
    if x % 2 == 0:
        print("EVEN ", end='')
    if x % 2 != 0:
        print("ODD ", end='')


    if x < 0:
        print("NEGATIVE")
    else:
        print("POSITIVE")

