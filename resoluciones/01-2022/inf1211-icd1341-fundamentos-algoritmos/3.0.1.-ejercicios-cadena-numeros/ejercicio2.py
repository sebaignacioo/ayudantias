def llenarLista():
    lista = []
    num = input()
    while num != 'FIN':
        lista.append(num)
        num = input()
    return lista

lista = llenarLista()
print(f'listado de datos = {lista}\n')
suertudos = list(filter(lambda n: n.count('7') > 0, lista))
print(f'listado de suertudos = {suertudos if len(suertudos) > 0 else "NO HAY"}\n')
print(f'porcentaje de suertudos = {(len(suertudos) / len(lista)) * 100:.1f} %')
