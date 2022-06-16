from string import ascii_letters, digits

def procesarCasos(n):
    mensajes = leerMensajes(n)
    i = 1
    print(f'Lista de Mensajes = {mensajes}\n')
    for msj in mensajes:
        print(f'Mensaje {i} : {msj}')
        print(f'Costo es $ {definirCosto(msj)}\n')
        i += 1

def leerMensajes(n):
    lista = []
    for i in range(n):
        lista.append(input())
    return lista

def definirCosto(msj):
    COSTO_LETRA = 100
    COSTO_DIG = 200
    COSTO_ESP = 300
    costo = 0
    for caracter in msj:
        if caracter != ' ':
            if caracter in ascii_letters:
                costo += COSTO_LETRA
            elif caracter in digits:
                costo += COSTO_DIG
            else:
                costo += COSTO_ESP
    return costo

# Programa principal
procesarCasos(int(input()))
