import math
import sys
from decimal import Decimal

line1 = sys.stdin.readline().split(" ")
line2 = sys.stdin.readline().split(" ")

px1, py1 = Decimal(line1[0]), Decimal(line1[1])
px2, py2 = Decimal(line2[0]), Decimal(line2[1])

dist = ((px2 - px1) ** 2) + ((py2 - py1) ** 2)

print(round(math.sqrt(dist), 4))
