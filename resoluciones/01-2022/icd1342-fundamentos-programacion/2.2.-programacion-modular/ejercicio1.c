/*double factorial(int numero)
{
    int i;
    double factorial=1.0;
    if (numero==0 || numero==1) return 1;
    for (i=2; i<=numero; i++)
    {
        factorial=factorial*i;
    }

    return factorial;

}*/

double factorial(int numero)
{
    if (numero==0 || numero==1) return 1;
    else return factorial(numero - 1) * numero;
}

double potencia(double base, int exp) {
    double pot = 1;
    for (int i = 1; i <= exp; i++) {
        pot *= base;
    }
    return pot;
}

double omega(double x, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += ((potencia(x, (2 * i + 1))) / factorial((2 * i + 1)));
    }
    return suma;
}
