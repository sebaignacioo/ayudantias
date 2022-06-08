def leerValidar():
    num = int(input())
    while num <= 0:
        num = int(input())
    return num


def esHipopar(numero):
    while numero > 0:
        ult_dig = numero % 10
        if ult_dig % 2 == 0:
            print(f'El dígito {ult_dig} es par,', end=' ')
            return True
        numero //= 10
        # numero = numero // 10
    print('NO se encontraron dígitos pares,', end=' ')
    return False


numero = leerValidar()
if esHipopar(numero):
    print("en consecuencia", numero, "ES HIPOPAR")
else:
    print("en consecuencia", numero, "NO ES HIPOPAR")
