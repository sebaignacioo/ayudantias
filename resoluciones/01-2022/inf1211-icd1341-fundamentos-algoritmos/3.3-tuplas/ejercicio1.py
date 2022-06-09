def fitroEnMenu(tipoBuscado, monto, menu):
    existe = False
    print(f'Listado de {tipoBuscado} (s) menores a $ {monto} :')
    for cod, nombre, tipo, valor in menu:
        if tipo == tipoBuscado and valor <= monto:
            print(f'{nombre} = $ {valor}')
            existe = True
    if not existe:
        print('no hay información disponible')


def buscarPlato(codBuscado, menu):
    for cod, nombre, tipo, valor in menu:
        if cod == codBuscado:
            return nombre, valor


def valorarConsumo(consumo, menu):
    print('cantidad - plato - valor')
    print('------------------------')
    total = 0
    for codPlato, cantidad in consumo:
        nombre, valor = buscarPlato(codPlato, menu)
        total += cantidad * valor
        print(f'{cantidad} {nombre} $ {cantidad * valor}')
    print(f'TOTAL = $ {total}')
