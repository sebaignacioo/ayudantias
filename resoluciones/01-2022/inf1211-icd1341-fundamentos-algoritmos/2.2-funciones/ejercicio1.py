def leerYValidar(mayorIgualA):
    num = int(input())
    while num < mayorIgualA:
        num = int(input())
    return num


def esPrimo(num):
    if num == 1:
        return False
    for i in range(2, num):
        if (num % i) == 0:
            return False
    return True


def primoAnt(num):
    num -= 1
    while True:
        if esPrimo(num):
            return num
        num -= 1


def primoSig(num):
    num += 1
    while True:
        if esPrimo(num):
            return num
        num += 1


num = leerYValidar(3)
print(f'EL MENOR SEGMENTO PRIMO QUE CONTIENE A {num} ES [ {primoAnt(num)} .. {primoSig(num)} ]')