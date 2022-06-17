cant_veh = int(input())
while cant_veh <= 0:
    cant_veh = int(input())

print(f"SE CONTROLARON {cant_veh} VEHICULOS\n")

erroneos = 0
no_excede = 0
menos_grave = 0
grave = 0
gravisima = 0
utm_rec = 0

for i in range(cant_veh):
    patente = input()
    distancia = int(input())  # metros
    v_max = int(input())  # km/h
    segundos = int(input())  # s

    v_media = ((distancia / segundos) * 3.6) // 1

    print(f"VEHICULO {i + 1} PATENTE {patente}")
    if distancia <= 0 or v_max <= 0 or segundos <= 0:
        print("ERROR EN LOS DATOS REGISTRADOS.")
        erroneos += 1
    else:
        print(f"Velocidad Máxima Permitida en el Tramo = {v_max}")
        print(f"Velocidad Media Vehículo = {v_media:.0f}")
        if v_max >= v_media:
            print("No excedió velocidad máxima permitida.")
            no_excede += 1
        else:
            print(f"Excedió velocidad máxima permitida en {v_media - v_max:.0f} kms/h.")
            if (v_media - v_max) > 20:
                print("FALTA : Gravísima - SANCIÓN : 3 UTM y se SUSPENDE LICENCIA 45 días.")
                gravisima += 1
                utm_rec += 3
            elif (v_media - v_max) > 10:
                print("FALTA : Grave - SANCIÓN : 1.5 UTM.")
                grave += 1
                utm_rec += 1.5
            else:
                print("FALTA : Menos Grave - SANCIÓN : 1 UTM.")
                menos_grave += 1
                utm_rec += 1
    print()

print("********** REPORTE FINAL **********\n")
print(f"El {(erroneos / cant_veh) * 100:.1f} % presentó un error en el registro de datos.")
print(f"El {(no_excede / cant_veh) * 100:.1f} % NO iba a exceso de velocidad.")
print(f"El {(menos_grave / cant_veh) * 100:.1f} % cometió una falta menos grave.")
print(f"El {(grave / cant_veh) * 100:.1f} % cometió una falta grave.")
print(f"El {(gravisima / cant_veh) * 100:.1f} % cometió una falta gravísima.\n")
print(f"Se recaudaron {utm_rec} UTMs.\n")
print("*********** FIN REPORTE ************")