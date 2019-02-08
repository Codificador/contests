import sys
import math
from decimal import Decimal

a, b, c = [Decimal(x) for x in sys.stdin.readline().split()]

delta = Decimal(((b**2) - (4 * a * c)))
if delta < 0 or a == 0 or b == 0 or c == 0:
    print("Impossivel calcular")
else:
    print("R1 = " + str(round(((-b) + Decimal(math.sqrt(delta))) / (2 * a), 5)))
    print("R2 = " + str(round(((-b) - Decimal(math.sqrt(delta))) / (2 * a), 5)))
