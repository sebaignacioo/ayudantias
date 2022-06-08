A_BASAL_PIEZA = 5.5

area_basal_empacada = float(input())
volumen_original = float(input())

altura_pieza = volumen_original / A_BASAL_PIEZA
volumen_empacada = altura_pieza * area_basal_empacada

print(int(volumen_empacada))