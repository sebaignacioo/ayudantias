precio = int(input())
cant_unidades = int(input())

if (cant_unidades >= 10):
    precio_final = round(0.9 * (precio * cant_unidades))
else:
    precio_final = round(precio * cant_unidades)

print(f'Precio final : {precio_final}')
