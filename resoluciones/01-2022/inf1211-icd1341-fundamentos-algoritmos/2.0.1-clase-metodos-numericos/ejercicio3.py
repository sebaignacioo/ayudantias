def esSuertudo(num):
    while num > 0:
        ult_dig = num % 10
        if ult_dig == 7:
            return True
        num //= 10
    return False


def mostrarSuertudos(a, b):
    existe = False

    for i in range(a, b + 1):
        if esSuertudo(i):
            if not existe:
                print(f'NÚMEROS SUERTUDOS EN EL INTERVALO {a} .. {b} =', end=' ')
                existe = True
            print(i, end=' ')
    if not existe:
        print("NO HAY NÚMEROS SUERTUDOS EN EL INTERVALO")
