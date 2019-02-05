val = int(input())
print(val, sep='')
for i in (100,50,20,10,5,2,1):
    print(str(val // i) + " nota(s) de R$ " + str(i) + ",00",sep='')
    val = val % i
