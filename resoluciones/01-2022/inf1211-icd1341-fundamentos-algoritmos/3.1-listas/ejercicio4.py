def leer_datos(n):
    lista = []
    for i in range(n):
        lista.append(int(input()))
    return lista


def es_alternada(lista):
    par_impar = (lista[0] % 2) == 0
    for i in range(1, len(lista)):
        if par_impar == ((lista[i] % 2) == 0):
            return False
        par_impar = (lista[i] % 2) == 0
    return True


n = int(input())
lista = leer_datos(n)
print(f'Lista = { lista }')
if es_alternada(lista):
    print("La lista SI es alternada par-impar")
else:
    print("La lista NO es alternada par-impar")
