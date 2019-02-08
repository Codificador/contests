import sys

a, b, c, d = [int(x) for x in sys.stdin.readline().split()]
print("Valores aceitos" if b > c and d > a and (c + d) > (a + b) and c > 0 and d > 0 and a % 2 == 0 else "Valores nao aceitos")

