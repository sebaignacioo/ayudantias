#include <stdio.h>

#define GRAVEDAD_TIERRA 9.8

int main() {
    float pesoTierra, gravedadPlaneta, masa;
    int pesoPlaneta;
    scanf("%f %f", &pesoTierra, &gravedadPlaneta);
    masa = pesoTierra / GRAVEDAD_TIERRA;
    pesoPlaneta = masa * gravedadPlaneta;

    printf("%d", pesoPlaneta);
}