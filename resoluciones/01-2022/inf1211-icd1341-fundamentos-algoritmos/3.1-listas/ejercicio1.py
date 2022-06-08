def llenar_lista(n):
    lista = []
    for i in range(n):
        lista.append(int(input()))
        # lista += [int(input())]
    return lista

def celsius_a_kelvin(temp_c):
    kelvin = []
    for c in temp_c:
        kelvin += [(273.15 + c)]
    return kelvin

def imprimir_temp(temp_k):
    for t in temp_k:
        print(t, end=' ')


# Programa principal
n = int(input())
temp_c = llenar_lista(n)
temp_k = celsius_a_kelvin(temp_c)
imprimir_temp(temp_k)
