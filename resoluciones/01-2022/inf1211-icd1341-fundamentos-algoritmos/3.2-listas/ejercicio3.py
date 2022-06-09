def leerLista(n):
    lista = []
    for i in range(n):
        lista.append(int(input()))
    return lista


def esEspaldaCamello(lista):
    for i in range(1, len(lista) - 1):
        if not (((lista[i - 1] > lista[i]) and (lista[i] < lista[i + 1])) or
                ((lista[i - 1] < lista[i]) and (lista[i] > lista[i + 1]))):
            return False
    return True


n = int(input())
numeros = leerLista(n)
print(f'Lista = {numeros}')
print(f'La lista {"SI" if esEspaldaCamello(numeros) else "NO" } es espalda de camello')
