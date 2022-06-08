COSTO_DULCE = 13

entregados = int(input())
sobrantes = int(input())

total_dulces = entregados + sobrantes
costo_total = total_dulces * COSTO_DULCE

print(f'En total Benito compro {total_dulces} dulces, y gasto {costo_total} pesos.')