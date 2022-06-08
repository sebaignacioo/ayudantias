#include <stdio.h>
#include <math.h>

#define N_MIN 1640
#define N_MAX 36864000

int main() {
    int num, x, y, encontrado = 0;
    do {
        scanf("%d", &num);
    } while ((num < N_MIN) || (num > N_MAX));
    x = (int) trunc(sqrt(num)) + 1;
    y = x;
    while (((x * y) != num) && (x >= 40)) {
        x -= 1;
        while ((x * y) < num) {
            y += 1;
        }
        if ((x * y) == num) encontrado = 1;
    }

    if (encontrado)
        printf("%d %d\n", x, y);
    else
        printf("Imposible fabricar pantalla de %d pixeles que cumpla con las restricciones del fabricante!",
               num);
    return 0;
}