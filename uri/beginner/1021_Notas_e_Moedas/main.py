from decimal import Decimal

val = Decimal(input())
print("NOTAS:")
for i in (100,50,20,10,5,2):
    print(str(val // i) + " nota(s) de R$ " + str(i) + ".00",sep='')
    val = round(val % i, 2)
print("MOEDAS:")
dc = {100: "1.00", 50: "0.50", 25: "0.25", 10: "0.10", 5: "0.05", 1: "0.01" }
val = val * 100
for i in (100, 50, 25, 10, 5, 1):
    print(str(int(val // i)) + " moeda(s) de R$ " + str(dc[i]))
    val = round(val % i, 2)
