def calcular_nuevos_arriba(ar, ab):
    return 3 * ar + ab


def calcular_nuevos_abajo(ar, ab):
    return ar + 3 * ab


def calcular_plantas_arriba(num):
    arr = 1
    n_arr = 1
    aba = 0
    n_aba = 0
    for i in range(num):
        aux_arr = n_arr
        n_arr = calcular_nuevos_arriba(aux_arr, n_aba)
        n_aba = calcular_nuevos_abajo(aux_arr, n_aba)
        arr += n_arr
        aba += n_aba
    return arr


# Programa principal
n = int(input())
print(calcular_plantas_arriba(n))
