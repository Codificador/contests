n = int(input())
while n:
    word = str(input())
    if len(word) == 5:
        print(3)
    else:
        p0, p1, p2 = word[0], word[1], word[2];
    
        if (p0 == 'o' and p1 == 'n') or (p0 == 'o' and p2 == 'e') or (p1 == 'n' and p2 == 'e'):
            print(1)
        else:
            print(2)
    n = n - 1;