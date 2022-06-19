def llenarLista(n):
    lista = []
    for i in range(n):
        lista.append(input())
    return lista

def imprimirLista(lista, titulo):
    print(f'Lista de {titulo} es:\n{lista}\n')

def listaSinceros(listaOriginal: list):
    return list(filter(lambda num: num.count('0') == 0, listaOriginal))

n = int(input())
lista = llenarLista(n)
imprimirLista(lista, 'datos leídos')
sinceros = listaSinceros(lista)
imprimirLista(sinceros, 'sinceros')
