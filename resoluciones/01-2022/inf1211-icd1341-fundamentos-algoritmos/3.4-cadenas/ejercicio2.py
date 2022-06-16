def procesarPalabra(palabra):
    print(f'{palabra} {"SI" if esOrdenada(palabra) else "NO"} es palabra con letras ordenadas')

def esOrdenada(palabra):
    minusc = palabra.lower()
    for i in range(len(minusc) - 1):
        if minusc[i] > minusc[i + 1]:
            return False
    return True

# Programa principal
palabra = input()
if palabra == 'FIN':
    print("No hubo palabras para analizar")
while palabra != 'FIN':
    procesarPalabra(palabra)
    palabra = input()