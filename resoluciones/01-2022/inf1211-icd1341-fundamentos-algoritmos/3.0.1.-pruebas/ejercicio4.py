def leerLista():
    lista = []
    continuar = True
    while continuar:
        numero = input()
        lista_input = numero.split(' ')
        for inp in lista_input:
            if inp == 'FIN':
                continuar = False
            elif inp != '':
                lista.append(inp)
    return lista

lista = leerLista()
print(f'listado de datos = {lista}\n')
fatalitos = list(filter(lambda num: num.count('13') > 0, lista))
print(f'listado de Fatalitos = {fatalitos}\n')
print(f'Total de Fatalitos = {len(fatalitos)}')
print(f'Total de datos     = {len(lista)}')
