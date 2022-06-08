def invertir(num):
    aux = 0
    while num > 0:
        aux = (10 * aux) + (num % 10)
        num //= 10
    return aux


def esReversible(num):
    suma = num + invertir(num)
    while suma > 0:
        if (suma % 10) % 2 == 0:
            return False
        suma //= 10
    return True


def procesarNumeros():
    sumaRev = 0
    sumaNoRev = 0
    num = int(input())
    while num > 0:
        if esReversible(num):
            print(f'{num} SI es reversible')
            sumaRev += num
        else:
            print(f'{num} NO es reversible')
            sumaNoRev += num
        num = int(input())
    if sumaRev == 0 and sumaNoRev == 0:
        print('No se ingresaron números a analizar')
    else:
        print(f'Suma de reversibles = {sumaRev}')
        print(f'Suma de NO reversibles = {sumaNoRev}')


procesarNumeros()
