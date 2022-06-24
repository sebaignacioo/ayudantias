def leerLista():
    lista = []
    numero = input()
    while numero != 'FIN':
        lista_input = numero.split(' ')
        for inp in lista_input:
            if inp != '':
                lista.append(inp)
        numero = input()
    return lista

cant_min = int(input())
lista = leerLista()
lista_supersuertudos = list(filter(lambda num: num.count('7') >= cant_min or num.count('7') == len(num), lista))
print(f'Cantidad (mínimo) de 7´s requeridos para considerar a un número como supersuestudo es: {cant_min}\n')
print(f'listado de datos = {lista}\n')
print(f'listado de SuperSuertudos = {lista_supersuertudos}\n')
print(f'RESUMEN : Total de SuperSuertudos / Total de valores leídos = {len(lista_supersuertudos)} / {len(lista)}')
