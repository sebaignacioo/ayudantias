#define POS_NULA -1

int buscarValor(int *vector, int valorBuscado, int n) {
    for (int i = 0; i < n; i++) {
        if (vector[i] == valorBuscado)
            return i;
    }
    return POS_NULA;
}