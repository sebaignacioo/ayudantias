total_estudiantes = int(input())
menor_nota = 7.0

for i in range(total_estudiantes):
    nota_estudiante = float(input())
    if nota_estudiante < menor_nota:
        menor_nota = nota_estudiante

print(f'Menor nota final : {menor_nota:.1f}')
