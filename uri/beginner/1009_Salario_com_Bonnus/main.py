from decimal import Decimal

nFuncionarios, horasTrabalhadas, valorHora = int(input()), int(input()), Decimal(input())
print("NUMBER = " + str(nFuncionarios), sep='')
print("SALARY = U$ " + str(round(horasTrabalhadas * valorHora, 2)), sep='')
