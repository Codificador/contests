n = int(input())
dc = {365:" ano(s)", 30: " mes(es)", 1: " dia(s)"}
for i in (365, 30, 1):
    print(str(n // i) + dc[i])
    n = n % i
