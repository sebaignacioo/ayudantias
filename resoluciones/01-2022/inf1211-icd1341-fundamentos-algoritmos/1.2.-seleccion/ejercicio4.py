salario_actual = int(input())

if (salario_actual < 250000):
    salario_reajustado = salario_actual * 1.2
elif (salario_actual < 500000):
    salario_reajustado = salario_actual * 1.1
elif (salario_actual < 1000000):
    salario_reajustado = salario_actual * 1.05
else:
    salario_reajustado = salario_actual

print(f'Salario reajustado = $ {int(salario_reajustado)}')
