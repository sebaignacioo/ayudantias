def palindromo(num):
    dado_vuelta = 0
    aux_num = num
    while aux_num > 0:
        ult_dig = aux_num % 10
        dado_vuelta = (10 * dado_vuelta) + ult_dig
        aux_num //= 10
    return dado_vuelta == num
