from string import ascii_letters, digits

vocales = 'aeiou'
tieneSoloVocales = True
tieneSoloAlfabeto = True
tieneSolosDigitos = True

palabra = input()

print(f'Alfabeto: {ascii_letters}')
print(f'Digitos: {digits}')
print(f'Vocales: {vocales}')

for letra in palabra:
    if letra not in vocales:
        tieneSoloVocales = False
        break

print(f'La palabra {palabra} {"SI" if tieneSoloVocales else "NO"} contiene sólo vocales')

for letra in palabra:
    if letra not in ascii_letters:
        tieneSoloAlfabeto = False
        break

print(f'La palabra {palabra} {"SI" if tieneSoloAlfabeto else "NO"} contiene sólo letras del alfabeto')

for letra in palabra:
    if letra not in digits:
        tieneSolosDigitos = False
        break

print(f'La palabra {palabra} {"SI" if tieneSolosDigitos else "NO"} contiene sólo dígitos')
