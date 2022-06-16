def procesarPalabra(palabra):
    print(f'{palabra} {"SI" if esPentavolica(palabra) else "NO"} es pentavocálica')

def esPentavolica(palabra):
    vocales = ['a', 'e', 'i', 'o', 'u']
    minusc = palabra.lower()
    for voc in vocales:
        if (voc not in minusc) or (minusc.count(voc) > 1):
            return False
    return True

# Programa principal
palabra = input()
if palabra == 'FIN':
    print("No hubo palabras a analizar")
while palabra != 'FIN':
    procesarPalabra(palabra)
    palabra = input()