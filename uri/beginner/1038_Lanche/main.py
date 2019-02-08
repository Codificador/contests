import sys

menu = {1: 4.00, 2:4.50, 3:5.00, 4:2.00, 5:1.50}
x, y = [int(x) for x in sys.stdin.readline().split()]

print("Total: R$ " + "{0:.2f}".format(round(menu[x] * y, 2)))
