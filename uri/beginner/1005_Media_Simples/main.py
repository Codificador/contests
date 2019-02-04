from decimal import Decimal

n1, n2 = Decimal(input()), Decimal(input())
print("MEDIA = ", round( ((n1 * Decimal(3.5)) + (n2 * Decimal(7.5))) / Decimal(11) ,5), sep='')
