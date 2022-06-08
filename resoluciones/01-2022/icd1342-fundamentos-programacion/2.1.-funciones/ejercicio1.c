#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double exponencial(double);
double factorial(int);

int main() {
    double x;
    scanf("%lf",&x);
    printf("La exponencial de %.2lf calculada por mi funcion es %lf\n",x,exponencial(x));
    printf("La exponencial de %.2lf calculada por la funcion de C es %lf\n",x,exp(x));
    return EXIT_SUCCESS;
}

/*double exponencial(double x) {
    double terminoASumar = 1.0, suma = 0.0;
    int i = 1;

    do {
        suma += terminoASumar;
        terminoASumar = pow(x, i) / factorial(i);
        i++;
    } while (fabs(terminoASumar) > 0.00001);

    return suma;
}

double factorial(int num) {
    double fact = 1.0;
    if (num > 1) {
        for (int i = 2; i <= num; i++)
            fact *= i;
    }
    return fact;
}*/

double exponencial(double numero)
{

    double ecuacion_taylor;
    double contador_taylor=0;

    int i=0;
    do
    {
        ecuacion_taylor= pow(numero,i)/factorial(i);
        if (fabs(ecuacion_taylor)>0.00001)
            contador_taylor+=ecuacion_taylor;
        i++;
    }while(fabs(ecuacion_taylor)>0.00001);

    return contador_taylor;
}

double factorial(int numero)
{
    int i;
    double factorial=1.0;
    if (numero==0 || numero==1) return 1;
    for (i=2; i<=numero; i++)
    {
        factorial=factorial*i;
    }

    return factorial;

}
