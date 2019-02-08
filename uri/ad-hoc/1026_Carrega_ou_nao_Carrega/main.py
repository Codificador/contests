import sys

for l in sys.stdin.readlines():
    s = l.split()
    a, b = int(s[0]), int(s[1])
    print(a ^ b)
