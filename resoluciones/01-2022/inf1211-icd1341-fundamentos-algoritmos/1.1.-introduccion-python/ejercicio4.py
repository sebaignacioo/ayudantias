BOT_X_JABA = 12

total_botellas = int(input())
total_jabas = total_botellas // BOT_X_JABA
botellas_sin_trasladar = total_botellas % BOT_X_JABA

print(f'Cantidad de jabas = {total_jabas}')
print(f'quedan {botellas_sin_trasladar} sin trasladar')