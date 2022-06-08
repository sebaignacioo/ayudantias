cant_asistentes = int(input())
mayores_edad = 0

for i in range(cant_asistentes):
    edad = int(input())
    if edad >= 18:
        mayores_edad += 1

if mayores_edad == 0:
    print('No hubo mayores de edad')
elif mayores_edad == cant_asistentes:
    print('Todos eran mayores de edad')
else:
    print(f'Cantidad de mayores de edad: {mayores_edad}')
