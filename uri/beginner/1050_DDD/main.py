dc = dict()
dc[61] = "Brasilia"
dc[71] = "Salvador"
dc[11] = "Sao Paulo"
dc[21] = "Rio de Janeiro"
dc[32] = "Juiz de Fora"
dc[19] = "Campinas"
dc[27] = "Vitoria"
dc[31] = "Belo Horizonte"

i = int(input())
try:
    print(dc[i])
except KeyError:
    print("DDD nao cadastrado")
