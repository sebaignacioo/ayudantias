def llenar_lista(n):
    lista = []
    for i in range(n):
        lista.append(int(input()))
    return lista


def imprimir_saltado(lista):
    print("saltado =", end=' ')
    i = 0
    sum = 2
    while i < len(lista):
        print(lista[i], end=' ')
        i += sum
        sum += 1


n = int(input())
lista = llenar_lista(n)
print(f'lista completa = { lista }')
imprimir_saltado(lista)
