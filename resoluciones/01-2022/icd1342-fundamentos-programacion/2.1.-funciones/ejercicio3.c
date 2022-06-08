#include <stdio.h>
#include <math.h>

double calcularPuntajeValorant(int, int, int, int, int, int, int);
double calcularPuntajeLOL(double, double, double, int, int);
double calcularPuntajeSmash(int, int, int);
double calcularPuntajeRocketLeague(int, int, int, int, int);
void validar(int *, int, int);
void procesar(int, double *, double *, double *, double *);
void mostrarResultados(double, double, double, double);

double factorial(int);
double puntajeJuego(int);
void determinarGanador(double, double, double, double);

int main() {
    int n;
    double ptjeInformatica = 0, ptjeDerecho = 0, ptjePedIngles = 0, ptjeBioquimica = 0;

    validar(&n, 4, 20);
    procesar(n, &ptjeInformatica, &ptjeDerecho, &ptjePedIngles, &ptjeBioquimica);
    mostrarResultados(ptjeInformatica, ptjeDerecho, ptjePedIngles, ptjeBioquimica);

    return 0;
}

double calcularPuntajeValorant(int ptjeJug1, int ptjeJug2, int ptjeJug3, int ptjeJug4, int ptjeJug5, int ganadas,
                               int perdidas) {
    double promJugadores = (ptjeJug1 + ptjeJug2 + ptjeJug3 + ptjeJug4 + ptjeJug5) / 5.0;

    return promJugadores * sqrt((double) ganadas / (perdidas + 1));
}

double calcularPuntajeLOL(double kills, double deaths, double assists, int victorias, int pentakills) {
    if ((kills * assists) <= (deaths * 10)) return 0;
    return (log((kills * assists) - (deaths * 10)) / log(3.0)) * pow(victorias, 2.0) + 500 * pentakills;
}

double calcularPuntajeSmash(int vidasSobrantes, int victorias, int derrotas) {
    return (vidasSobrantes * sqrt(pow(victorias, 3.0))) - (100 * derrotas);
}

double calcularPuntajeRocketLeague(int victorias, int golesFavor, int golesContra, int asistencias,
                                   int salvadasEpicas) {
    return sqrt(victorias + (asistencias * salvadasEpicas)) * (factorial(golesFavor) / factorial(golesContra));
}

void validar(int *n, int limInf, int limSup) {
    do {
        scanf("%d", n);
    } while ((*n < limInf) || (*n > limSup));
}

void procesar(int cantAct, double *ptjeInformatica, double *ptjeDerecho, double *ptjePedIngles,
              double *ptjeBioquimica) {
    int actividad, carrera;
    double ptjeActividad;

    for (int i = 0; i < cantAct; i++) {
        scanf("%d %d", &carrera, &actividad);
        ptjeActividad = puntajeJuego(actividad);
        switch (carrera) {
            case 1:
                (*ptjeInformatica) += ptjeActividad;
                break;
            case 2:
                (*ptjeDerecho) += ptjeActividad;
                break;
            case 3:
                (*ptjePedIngles) += ptjeActividad;
                break;
            default:
                (*ptjeBioquimica) += ptjeActividad;
                break;
        }
    }
}

void mostrarResultados(double ptjeInformatica, double ptjeDerecho, double ptjePedIngles, double ptjeBioquimica) {
    printf("La carrera Ingenieria Civil Informatica obtuvo: %.1lf puntos\n", ptjeInformatica);
    printf("La carrera Derecho obtuvo: %.1lf puntos\n", ptjeDerecho);
    printf("La carrera Pedagogia en Ingles obtuvo: %.1lf puntos\n", ptjePedIngles);
    printf("La carrera Bioquimica obtuvo: %.1lf puntos\n\n", ptjeBioquimica);

    printf("Ha ganado la carrera: ");
    determinarGanador(ptjeInformatica, ptjeDerecho, ptjePedIngles, ptjeBioquimica);
    printf("\nFelicitaciones y gracias por participar\n");

}

double factorial(int num) {
    double fact = 1.0;
    if (num > 1) {
        for (int i = 2; i <= num; i++)
            fact *= i;
    }
    return fact;
}

double puntajeJuego(int actividad) {
    int valPtje1, valPtje2, valPtje3, valPtje4, valPtje5, victorias, derrotas, lolPentakills, smashVidas,
    rlGolesFavor, rlGolesContra, rlSalvadas, asistencias;
    double kills, deaths, lolAssists, puntaje;
    switch (actividad) {
        case 1:
            scanf("%d %d %d %d %d %d %d", &valPtje1, &valPtje2, &valPtje3, &valPtje4, &valPtje5, &victorias, &derrotas);
            puntaje = calcularPuntajeValorant(valPtje1, valPtje2, valPtje3, valPtje4, valPtje5, victorias, derrotas);
            break;
        case 2:
            scanf("%lf %lf %lf %d %d", &kills, &deaths, &lolAssists, &victorias, &lolPentakills);
            puntaje = calcularPuntajeLOL(kills, deaths, lolAssists, victorias, lolPentakills);
            break;
        case 3:
            scanf("%d %d %d", &smashVidas, &victorias, &derrotas);
            puntaje = calcularPuntajeSmash(smashVidas, victorias, derrotas);
            break;
        default:
            scanf("%d %d %d %d %d", &victorias, &rlGolesFavor, &rlGolesContra, &asistencias, &rlSalvadas);
            puntaje = calcularPuntajeRocketLeague(victorias, rlGolesFavor, rlGolesContra, asistencias, rlSalvadas);
            break;
    }

    if (puntaje < 0) return 0;
    return puntaje;
}

void determinarGanador(double ptjeInformatica, double ptjeDerecho,
                       double ptjePedIngles, double ptjeBioquimica) {
    if ((ptjeInformatica > ptjeDerecho) && (ptjeInformatica > ptjePedIngles) && (ptjeInformatica > ptjeBioquimica))
        printf("Ingenieria Civil Informatica ;))");
    else if ((ptjeDerecho > ptjeInformatica) && (ptjeDerecho > ptjePedIngles) && (ptjeDerecho > ptjeBioquimica))
        printf("Derecho");
    else if ((ptjePedIngles > ptjeInformatica) && (ptjePedIngles > ptjeDerecho) && (ptjePedIngles > ptjeBioquimica))
        printf("Pedagogia en Ingles");
    else
        printf("Bioquimica");
}
