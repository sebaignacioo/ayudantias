def leerLista(n):
    lista = []
    for i in range(n):
        lista.append(input())
    return lista

def esParitoso(num):
    for dig in num:
        digNum = int(dig)
        if digNum % 2 != 0:
            return False
    return True

n = int(input())
numeros = leerLista(n)
paritosos = sorted(list(map(lambda par: int(par), filter(lambda num: esParitoso(num), numeros))))
print(f'Lista inicial es:\n{numeros}\n')
print(f'Lista de Paritosos es:\n{paritosos}\n')
print(f'Porcentaje de Paritosos es: {(len(paritosos) / len(numeros)) * 100:.1f} %')
