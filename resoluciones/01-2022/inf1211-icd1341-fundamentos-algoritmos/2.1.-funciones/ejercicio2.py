def puedeFactorizarseEnKNumeros(n, k):
    cont = 0
    i = 2
    while (n != 1 and cont < k):
        if (n % i == 0):
            n /= i
            cont += 1
        else:
            i += 1
    return not (cont < k)