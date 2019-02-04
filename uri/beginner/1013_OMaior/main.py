import sys

maior = lambda a, b: int((a + b + abs(a - b)) / 2)

line = sys.stdin.readline().split(" ")
a, b, c = int(line[0]), int(line[1]), int(line[2])

print(str(maior(maior(a, b), c)) + " eh o maior")
