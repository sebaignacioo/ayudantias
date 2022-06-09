def SalaEstable(pulsosDia, pulsosNoche):
    n = len(pulsosDia)
    for i in range(n):
        if abs(pulsosDia[i] - pulsosNoche[i]) > 1:
            return False
    return True
