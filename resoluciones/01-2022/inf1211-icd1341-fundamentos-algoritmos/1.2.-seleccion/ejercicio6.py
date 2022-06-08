costo = 800

tiempo = int(input())
categoria = int(input())

if (tiempo > 30):
    if (categoria == 1):
        costo = costo + (tiempo - 30) * 20
    elif (categoria == 2):
        costo = costo + (tiempo - 30) * 25
    elif (categoria == 3):
        costo = costo + (tiempo - 30) * 30 + ((tiempo - 30) // 30) * 15
    else:
        costo = costo + (tiempo - 30) * 35 + ((tiempo - 30) // 25) * 15 + 200

if (categoria == 4):
    costo = costo + 200

print(costo)
