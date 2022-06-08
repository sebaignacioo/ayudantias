edad = int(input())
cant_cajas = int(input())
precio = float(input())

total_compra = (cant_cajas * precio) * 1.19
if (edad >= 60 and cant_cajas >= 10):
    descuento = total_compra * 0.6
else:
    descuento = total_compra * 0.07

print(f'Valor Compra con IVA       = $ {total_compra:.1f}')
print(f'Total Descuento            = $ {descuento:.1f}')
print(f'Valor Compra con Descuento = $ {total_compra - descuento:.1f}')
