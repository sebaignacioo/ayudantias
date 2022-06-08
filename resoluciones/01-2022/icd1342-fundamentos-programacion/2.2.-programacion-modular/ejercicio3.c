#include <stdio.h>
#include <stdbool.h>

int darVuelta(int);
bool esPalindromo(int);

int main() {
    int num, aux, dist;
    do {
        scanf("%d", &num);
        if (num >= 0) {
            aux = num;
            do {
                aux += 1;
            } while (!esPalindromo(aux));
            dist = aux - num;
            printf("La distancia de %d al siguiente PALINDROMO %d es %d\n", num, aux, dist);
        }
    } while (num >= 0);
    printf("FIN\n");
    return 0;
}

int darVuelta(int num) {
    int aux = 0;
    while (num > 0) {
        aux = (aux * 10) + (num % 10);
        num /= 10;
    }
    return aux;
}

bool esPalindromo(int num) {
    return num == darVuelta(num);
}
