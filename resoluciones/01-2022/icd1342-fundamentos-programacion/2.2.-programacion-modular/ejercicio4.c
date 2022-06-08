#include <stdio.h>
#include <stdbool.h>

bool analizarSDivisible(long long numero) {
    if ((numero / 10) == 0)
        return true;
    if (numero % 10 == 0)
        return false;
    return (numero % (numero % 10) == 0) && analizarSDivisible(numero / 10);
}

int main() {
    long long numero;
    scanf("%lld", &numero);
    bool sDivisible = analizarSDivisible(numero);
    if (sDivisible)
        printf("%lld SI\n", numero);
    else
        printf("%lld NO\n", numero);
    return 0;
}