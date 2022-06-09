def leerYValidarN():
    num = int(input())
    while num < 1:
        num = int(input())
    return num


def leerLista(n):
    lista = []
    for i in range(n):
        lista.append(int(input()))
    return lista


def sumarListas(a, b):
    lista = []
    for i in range(len(a)):
        lista.append(a[i] + b[i])
    return lista


def restarListas(a, b):
    lista = []
    for i in range(len(a)):
        lista.append(a[i] - b[i])
    return lista


def imprimirLista(lista, caracter):
    print(f'LISTA {caracter} :', end=' ')
    for elem in lista:
        print(elem, end=' ')
    print()


# Programa principal
n = leerYValidarN()
listaA = leerLista(n)
listaB = leerLista(n)
listaC = sumarListas(listaA, listaB)
listaD = restarListas(listaA, listaB)
imprimirLista(listaA, 'A')
imprimirLista(listaB, 'B')
imprimirLista(listaC, 'C')
imprimirLista(listaD, 'D')
