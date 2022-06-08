"""
Ejercicio 5 - Cuestionario de ayudantía 3
Jueves 31 de marzo

Ayudantes:
    - Sebastián García D.
    - Saúl Palma R.

Análisis del problema:
    El programa recibirá como entrada una serie de números enteros, que corres-
    ponderán al número de episodio, número de nivel, puntuación mínima para lo-
    grar el nivel, puntaje obtenido y vidas restantes de un jugador de Candy
    Crush. A partir de estos datos, se debe mostrar por pantalla si el jugador
    logró superar el nivel, la cantidad de estrellas obtenidas y el nivel si-
    guiente que le corresponde jugar (o si terminó el episodio completo). En
    caso de no superar el nivel, se debe mostrar la cantidad de vidas restantes
    que le quedan al jugador, luego de descontada 1 por el intento fallido.
"""

############################# Inicio del programa ##############################

# Variables a utilizar
n_episodio = int(input())
n_nivel = int(input())
ptje_min = int(input())
ptje_obt = int(input())
vidas_restantes = int(input())

"""
Se valida si el jugador logró superar el nivel, según el puntaje obtenido, y el
puntaje mínimo especificado en la entrada.
"""
if ptje_obt >= ptje_min:
    print('Genial nivel superado !')

    """ Se verifica el número de estrellas obtenidas, según la razón entre el
    ptje obtenido, y el ptje mínimo para superar el nivel. """
    if ptje_obt / ptje_min >= 3:
        print('Obtuviste 3 estrellas.')
    elif ptje_obt / ptje_min >= 2:
        print('Obtuviste 2 estrellas.')
    else:
        print('Obtuviste 1 estrella.')

    """ Se verifica si el jugador completó el episodio completo, o si pasa de
    nivel dentro del mismo episodio. Se imprime el mensaje correspondiente. """
    if n_nivel == 15:
        print(f'Completaste el episodio {n_episodio}')
    else:
        print(f'Pasaste al nivel {n_nivel + 1} del episodio {n_episodio}')
else:
    print('Nivel no superado NO lograste el objetivo')

    # Se resta 1 vida por el intento fallido
    vidas_restantes -= 1

    """ Se verifica las vidas restantes del jugador, y se muestra por pantalla
    el mensaje respectivo. """
    if vidas_restantes > 0:
        if vidas_restantes == 1:
            print('Te queda 1 vida.')
        else:
            print(f'Te quedan {vidas_restantes} vidas.')
    else:
        print('No te quedan más vidas.')

############################### Fin del programa ###############################
