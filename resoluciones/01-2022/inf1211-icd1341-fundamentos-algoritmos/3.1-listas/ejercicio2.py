def llenar_lista():
    lista = []
    num = int(input())
    while num >= 0:
        lista += [num]
        num = int(input())
    return lista


def modificar_lista(lista):
    for i in range(len(lista)):
        if (i % 2) == 0:
            lista[i] += 1
        else:
            lista[i] -= 1


def imprimir_lista(lista, titulo):
    print(f'Lista {titulo} = {lista}')


lista = llenar_lista()
imprimir_lista(lista, 'Original')
modificar_lista(lista)
imprimir_lista(lista, 'Nueva')