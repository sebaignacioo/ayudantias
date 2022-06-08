def mcd(a, b):
    div_max = 1
    for i in range(1, max(a, b) + 1):
        if (a % i == 0) and (b % i == 0):
            div_max = i
    return div_max