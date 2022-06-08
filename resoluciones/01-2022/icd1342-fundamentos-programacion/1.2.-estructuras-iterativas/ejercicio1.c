#include <stdio.h>

int main() {
    short i, n;
    long long abajo = 0, nuevosAbajo, antArriba, antAbajo;
    do {
        scanf("%hd", &n);
    } while ((n < 0) || (n > 100));
    antArriba = 1;
    antAbajo = 0;
    for (i = 0; i < n; i++) {
        nuevosAbajo = 3 * antAbajo + antArriba;
        abajo += nuevosAbajo;
        antArriba = 3 * antArriba + antAbajo;
        antAbajo = nuevosAbajo;
    }
    printf("%lld\n", abajo);
    return 0;
}