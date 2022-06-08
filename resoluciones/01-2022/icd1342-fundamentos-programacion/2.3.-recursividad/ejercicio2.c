#include <stdio.h>

void mostrarTablaMultiplicar1Al10(unsigned long, unsigned short);

int main()
{
    // Se declara y lee número
    unsigned long numero;
    scanf("%lu", &numero);
    // Se muestra la tabla de multiplicar del número leído a partir de 1 hasta 10
    unsigned short multiplicando = 1;
    mostrarTablaMultiplicar1Al10(numero, multiplicando);
    return 0;
}

void mostrarTablaMultiplicar1Al10(unsigned long num, unsigned short mul) {
    printf("%lu x %hd = %lu\n", num, mul, (num * mul));
    if (mul < 10) mostrarTablaMultiplicar1Al10(num, mul + 1);
}
