def esMariano(num):
    suma = 0
    while num > 0:
        ult_dig = num % 10
        if ult_dig % 2 != 0:
            suma += ult_dig
        num //= 10
    return suma % 2 != 0


def mostrarMarianosEntreAyB(a, b):
    hay = False
    for i in range(a, b + 1):
        if esMariano(i):
            hay = True
            print(i, end=' ')
    if not hay:
        print("NO HAY")



a = int(input())
b = int(input())
print("Números Marianos en [", a, "..", b, "] =", end=" ")
mostrarMarianosEntreAyB(a, b)
