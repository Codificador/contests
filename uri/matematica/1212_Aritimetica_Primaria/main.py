while True:
    m, n = str(input()).split(" ")
    if int(m) == 0 and int(n) == 0: 
        break
    rm = m[::-1]
    rn = n[::-1]
    ct = 0
    for i in range(0, len(rm)):
        try:
            if (int(rm[i]) + int(rn[i])) >= 10:
                ct = ct + 1
                rm[i+1] = str(int(rm[i+1]) + 1)
        except:
            break
    if ct > 0:
        if ct == 1:
            print(str(ct) + " carry operation.")
        else:
            print(str(ct) + " carry operations.")
    else:
        print("No carry operation.")