n = int(input())
for i in (60**2, 60, 1):
    print(n // i, end = ":" if i is not 1 else "\n")
    n = n % i
