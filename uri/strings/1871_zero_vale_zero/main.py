while True:
    m, n = str(input()).split(" ")
    if int(m) == 0 and  int(n) == 0: break
    else:
        print(str(int(m) + int(n)).replace('0', ''))