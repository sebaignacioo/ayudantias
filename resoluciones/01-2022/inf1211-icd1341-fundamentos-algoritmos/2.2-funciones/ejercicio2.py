def esOrdenado(num):
    while (num // 10) > 0:
        ultDig = num % 10
        penultDig = (num // 10) % 10
        if ultDig < penultDig:
            return False
        num //= 10
    return True


def ordenadosEnIntervalo(a, b):
    hay = False
    for i in range(a, b + 1):
        if esOrdenado(i):
            if hay:
                print(",", end=' ')
            print(i, end='')
            hay = True

    if not hay:
        print("NO HAY")


a = int(input())
b = int(input())
print("números ordenados entre", a, "y", b, ":", end=" ")
ordenadosEnIntervalo(a, b)
