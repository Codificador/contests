from sys import stdin
from decimal import Decimal


def eh_triangulo(a, b, c):
    return False if(a >= (b+c) or b >= (a+c) or c >= (a+b)) else True

a, b, c = [ Decimal(x) for x in stdin.readline().split()]
print( "Area = " + '%.1f'%(round(((a + b) * c) / 2)) if not eh_triangulo(a, b, c) else "Perimetro = " + '%.1f'%((round(a + b + c, 1))))

