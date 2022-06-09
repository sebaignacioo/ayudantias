def esPrimo(num):
    if num == 1:
        return False
    for i in range(2, round(num ** (1 / 2)) + 1):
        if (num % i) == 0:
            return False
    return True


def primosALista(num):
    lista = []
    for i in range(1, num + 1):
        if esPrimo(i):
            lista.append(i)
    return lista


def imprimirPrimos(lista, num):
    print(f'Primos en intervalo de 1 a {num} :', end=' ')
    for elem in lista:
        print(elem, end=' ')
    print()


# Programa principal
n = int(input())
primos = primosALista(n)
imprimirPrimos(primos, n)
