def leerLista():
    lista = []
    continuar = True
    while continuar:
        numero = input()
        lista_input = numero.split(' ')
        for inp in lista_input:
            if inp == 'FIN':
                continuar = False
            elif inp != '' and inp not in lista:
                lista.append(inp)
    return lista

def esSDivisible(num):
    if num == 0: return False
    while num > 0:
        dig = num % 10
        if dig == 0 or num % dig != 0:
            return False
        num //= 10
    return True

nums = leerLista()
print(f'datos ingresados = {nums}\n')
sDivisibles = sorted(list(map(lambda numSt: int(numSt), filter(lambda x: esSDivisible(int(x)), nums))), reverse=True)
noSDivisibles = sorted(list(map(lambda numSt: int(numSt), filter(lambda x: int(x) not in sDivisibles, nums))), reverse=True)
print(f'lista de    S-Divisibles - (de mayor a menor) = {sDivisibles}')
print(f'lista de NO S-Divisibles - (de mayor a menor) = {noSDivisibles}\n')
print(f'Porcentaje    S-Divisibles = {(len(sDivisibles) / len(nums)) * 100:.1f} %')
print(f'Porcentaje NO S-Divisibles = {(len(noSDivisibles) / len(nums)) * 100:.1f} %')
