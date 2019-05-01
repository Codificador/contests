n = int(input())
while n:
    word = str(input()).split(" ")
    code = [] 
    for w in word:
        if len(w) == 0:
            code.append(" ")
        else:
            code.append(w)
    code = [w[0] for w in code]
    st = ""
    for c in code:
        st = st + c

    print(st.replace(" ", ""))
    n = n - 1