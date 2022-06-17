cant = int(input())
casos = 0
par_par = 0
par_impar = 0
impar_par = 0
impar_impar = 0
while cant > 0:
    # Calcular suma hasta n
    suma = 0
    for i in range(cant):
        suma += (i + 1)
    cant_palos = suma * 3
    print(f"Para formar un triángulo de lado {cant} se necesitan {cant_palos} palos de fósforo")

    if (cant % 2) == 0 and (cant_palos % 2) == 0:
        par_par += 1
    elif (cant % 2) == 0 and (cant_palos % 2) != 0:
        impar_par += 1
    elif (cant % 2) != 0 and (cant_palos % 2) == 0:
        par_impar += 1
    else:
        impar_impar += 1
    casos += 1
    cant = int(input())

if casos == 0:
    print("No se ingresaron casos de prueba.")
else:
    print(f"\nREPORTE FINAL\n=============\n")
    print(f"Total casos de prueba procesados = {casos}")
    print(f"Total casos de prueba altura par que requiere cantidad par de fósforos = {par_par}")
    print(f"Total casos de prueba altura impar que requiere cantidad par de fósforos = {par_impar}")
    print(f"Total casos de prueba altura par que requiere cantidad impar de fósforos = {impar_par}")
    print(f"Total casos de prueba altura impar que requiere cantidad impar de fósforos = {impar_impar}")
