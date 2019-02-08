import string
n = int(input())
while n > 0:
    str = input()
    nstr = ""
    for ch in str:
        if ch in string.ascii_letters:
            nstr += chr(ord(ch) + 3)
        else:
            nstr += ch
    nstr = nstr[::-1]
    nnstr = ""
    for ch in nstr[len(nstr) // 2:]:
        nnstr += chr(ord(ch) - 1)
    print(nstr[0:len(nstr) // 2] + nnstr)
    n -= 1
