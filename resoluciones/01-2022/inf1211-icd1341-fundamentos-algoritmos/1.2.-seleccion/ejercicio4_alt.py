total_ventas = int(input())

if (total_ventas >= 1000000):
    comision = 0.15
elif (total_ventas >= 500000):
    comision = 0.1
elif (total_ventas >= 50000):
    comision = 0.08
else:
    comision = 0

print(f'su comisión es de $ {round(total_ventas * comision)}')
