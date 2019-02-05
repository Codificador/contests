from decimal import Decimal

KML = 12
h, av = int(input()), int(input())
r = Decimal((h * av)/KML)
print(round(r, 3))
