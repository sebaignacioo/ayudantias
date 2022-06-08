def leer_datos(n):
    lista = []
    for i in range(n):
        lista.append(int(input()))
    return lista


def esta_ordenada(lista):
    for i in range(len(lista) - 1):
        if lista[i + 1] > lista[i]:
            return False
    return True


n = int(input())
lista = leer_datos(n)
print(f'Lista = { lista }')
if esta_ordenada(lista):
    print("Lista SI esta en orden decreciente")
else:
    print("Lista NO esta en orden decreciente")
