#include <stdio.h>
#include <stdlib.h>
#define N 6

int comparaEnteros(const void *a, const void *b) {
    int *ptrA = (int *) a;
    int *ptrB = (int *) b;
    return *ptrB - *ptrA;
}

int main() {
    int vector[N] = {60, 50, 30, 40, 10, 20};
    qsort(vector, N, sizeof(int), comparaEnteros);
    for (int i = 0; i < N; i++)
        printf("%d ", vector[i]);
    return EXIT_SUCCESS;
}
