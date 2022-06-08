# Entrada
botella = int(input())

# Proceso
jaba = botella // 12
resto = botella % 12

# Salida
print("Cantidad de jabas =", jaba)
if (resto > 0):
    print("quedan", resto, "sin trasladar")
else:
    print("todas las bebidas fueron trasladadas")
