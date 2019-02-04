from decimal import Decimal

peso_a, peso_b, peso_c = Decimal(2), Decimal(3), Decimal(5)
nota_a, nota_b, nota_c = Decimal(input()), Decimal(input()), Decimal(input())
media = Decimal(((peso_a * nota_a) + (peso_b * nota_b) + (nota_c * peso_c)) / (peso_a + peso_b + peso_c))

print("MEDIA = ", str(round(media, 1)), sep='')
