while True:
    lines = input().split()
    if lines[0] == "*":
        break

    ret = True
    ch = lines[0].lower()[0]
    for line in lines:
        if line.lower()[0] != ch:
            ret = False

    if ret:
        print("Y")
    else:
        print("N")
