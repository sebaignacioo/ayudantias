def procesarFrase(frase, n):
    print(f'Frase {n} - palabras repetidas : {repetidas(frase)}')

def limpiarFrase(frase):
    aEliminar = '.,:;'
    minusc = frase.lower()
    for signo in aEliminar:
        minusc = minusc.replace(signo, '')
    return minusc

def repetidas(frase):
    listaRepetidas = []
    fraseLimpia = limpiarFrase(frase)
    palabras = fraseLimpia.split(' ')
    for palabra in palabras:
        if palabra not in listaRepetidas and palabras.count(palabra) > 1:
            listaRepetidas.append(palabra)
    listaRepetidas.sort()
    return listaRepetidas

# Programa principal
frase = input()
i = 1
if frase == 'FIN':
    print("No hubo frases para analizar")
while frase != 'FIN':
    procesarFrase(frase, i)
    frase = input()
    i += 1
