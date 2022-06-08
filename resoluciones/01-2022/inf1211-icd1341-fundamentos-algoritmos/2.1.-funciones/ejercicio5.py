def dibujaOp1(car, lado):
    for i in range(1, lado + 1):
        print(i * (car + ' '))


def dibujaOp2(car, lado):
    for i in range(lado):
        print(i * '  ', end='')
        print((lado - i) * (car + ' '))


def dibujaOp3(car, lado):
    for i in range(lado, 0, -1):
        print(i * (car + ' '))


def dibujaTrianguloRectangulo(car, lado, op):
    if op == 1:
        dibujaOp1(car, lado)
    elif op == 2:
        dibujaOp2(car, lado)
    else:
        dibujaOp3(car, lado)
