def leerLista():
    lista = []
    numero = input()
    while numero != 'FIN':
        lista_input = numero.split(' ')
        for inp in lista_input:
            if inp != '' and inp not in lista:
                lista.append(inp)
        numero = input()
    return lista

def esOrdenado(num):
    for i in range(len(num) - 1):
        if num[i] > num[i + 1]:
            return False
    return True

nums = leerLista()
print(f'datos ingresados = {nums}\n')
ordenados = sorted(list(map(lambda numSt: int(numSt), filter(lambda x: esOrdenado(x), nums))))
noOrdenados = sorted(list(map(lambda numSt: int(numSt), filter(lambda x: int(x) not in ordenados, nums))))

print(f'lista de    ORDENADOS - (de menor a mayor) = {ordenados}')
print(f'lista de NO ORDENADOS - (de menor a mayor) = {noOrdenados}\n')
print('RESUMEN')
print(f'Cantidad    Total     = {len(nums)}')
print(f'Cantidad    Ordenados = {len(ordenados)}')
print(f'Cantidad NO Ordenados = {len(noOrdenados)}')
