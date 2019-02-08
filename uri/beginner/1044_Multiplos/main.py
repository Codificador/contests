a, b = input().split()

print("Sao Multiplos" if (abs(int(b)) % abs(int(a))) == 0 or (abs(int(a)) % abs(int(b))) == 0 else "Nao sao Multiplos")
