def sucesionPadovan(n):
    ant = 1
    ant2 = 1
    ant3 = 1
    for i in range(n):
        if i < 3:
            num = 1
        else:
            num = ant2 + ant3
        if i == (n - 1):
            print(f'{num}.')
        else:
            print(num, end = ', ')
        ant3 = ant2
        ant2 = ant
        ant = num