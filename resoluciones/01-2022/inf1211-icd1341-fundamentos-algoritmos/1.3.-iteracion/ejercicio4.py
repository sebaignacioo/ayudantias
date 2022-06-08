a = int(input())
b = int(input())
suma = 0

for i in range(a, b + 1):
    if ((i % 2) == 0) and ((i % 3) == 0):
        suma += i

if suma > 0:
    print(f'SUMA = {suma}')
else:
    print('NO EXISTEN NUMEROS DIVISIBLES POR 2 Y POR 3 EN EL INTERVALO')
