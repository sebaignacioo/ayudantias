def llenar_lista(n):
    lista = []
    for i in range(n):
        lista += [int(input())]
    return lista


def imprimir_lista(lista):
    print(f'Lista = { lista }')


def lista_dist_const(lista, n):
    dist = 0
    for i in range(n - 1):
        if dist == 0:
            dist = abs(lista[i + 1] - lista[i])
        else:
            if abs(lista[i + 1] - lista[i]) != dist:
                return False
    return True


n = int(input())
lista = llenar_lista(n)
imprimir_lista(lista)
if lista_dist_const(lista, n):
    print("Los elementos de la lista tienen una distancia constante")
else:
    print("Los elementos de la lista NO tienen una distancia constante")
