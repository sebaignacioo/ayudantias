trabajo_obs_1 = float(input())
trabajo_obs_2 = float(input())
trabajo_obs_3 = float(input())
presentacion_1 = float(input())
presentacion_2 = float(input())
reporte_proyecto = float(input())
prueba_escrita = float(input())

promedio_trabajos = (trabajo_obs_1 + trabajo_obs_2 + trabajo_obs_3) / 3
promedio_presentaciones = (presentacion_1 + presentacion_2) / 2

if (0.5 * (reporte_proyecto + prueba_escrita)) >= 4:
    nota_presentacion = 0.4 * prueba_escrita + 0.4 * reporte_proyecto + 0.1 * \
                        promedio_trabajos + 0.1 * promedio_presentaciones
else:
    nota_presentacion = 0.4 * prueba_escrita + 0.4 * reporte_proyecto + 0.2 * \
                        promedio_presentaciones

print(f'Nota presentación = {nota_presentacion:.1f}')

if (nota_presentacion >= 5.0):
    print("Aprobado")
    if (nota_presentacion > 6.0):
        print('Vuelo de observación!')
elif (nota_presentacion >= 3.0):
    print('Debe rendir examen')
else:
    print('Reprobado')
