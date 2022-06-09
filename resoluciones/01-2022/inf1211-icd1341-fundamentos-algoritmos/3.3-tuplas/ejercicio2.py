def procesarPunto(punto, circunferencia):
    xPunto, yPunto = punto
    centro, radio = circunferencia
    xCentro, yCentro = centro
    distancia = sqrt(((xCentro - xPunto) ** 2) + ((yCentro - yPunto) ** 2))
    if distancia <= radio:
        print(f'(({xCentro}, {yCentro}), {radio})')
    return distancia <= radio


def procesarPuntos(listaPuntos, listaCircunferencias):
    print('----- PROCESO DE LISTA DE PUNTOS EN FUNCIÓN -----')
    for punto in listaPuntos:
        existe = False
        xPunto, yPunto = punto
        print(f'Punto ({xPunto}, {yPunto}) se encuentra al interior de')
        for circ in listaCircunferencias:
            es = procesarPunto(punto, circ)
            if not existe:
                existe = es
        if not existe:
            print('ninguna circunferencia de la lista')
