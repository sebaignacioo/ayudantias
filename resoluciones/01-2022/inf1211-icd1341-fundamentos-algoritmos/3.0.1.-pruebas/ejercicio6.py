def esHipopar(num):
    for digStr in num:
        dig = int(digStr)
        if dig % 2 == 0:
            return True
    return False

def leerLista():
    lista = []
    num = input()
    while num != 'FIN':
        if num not in lista:
            lista.append(num)
        num = input()
    return lista

datos = leerLista()
hipopares = sorted(list(map(lambda numSt: int(numSt), filter(lambda n: esHipopar(n), datos))), reverse=True)
print(f'lista de datos = {datos}\n')
print(f'lista de hipopares - ordenado de mayor a menor = {hipopares}\n')
print(f'RESUMEN : Cantidad de Hipopares / Cantidad de leídos = {len(hipopares)} / {len(datos)}')
