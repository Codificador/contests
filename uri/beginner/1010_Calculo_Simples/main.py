import sys
from decimal import Decimal

l1, l2 = str(sys.stdin.readline()).split(" "), sys.stdin.readline().split(" ")
cod_p1, un_p1, val_p1 = l1[0], int(l1[1]), Decimal(l1[2])
cod_p2, un_p2, val_p2 = l2[0], int(l2[1]), Decimal(l2[2])

print("VALOR A PAGAR: R$ " + str( (un_p1 * val_p1) + (un_p2 * val_p2) ), sep='')
