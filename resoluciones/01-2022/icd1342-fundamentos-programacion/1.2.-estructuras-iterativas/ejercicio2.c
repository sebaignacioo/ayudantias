#include <stdio.h>
#include <math.h>

int main() {
    int cantJugadores, kills, muertes, asistencias, i, mvp;
    double mvpPoints, mvpMaxPoints;
    do {
        mvp = 0;
        mvpMaxPoints = 0;
        scanf("%d", &cantJugadores);
        if (cantJugadores > 0) {
            for (i = 0; i < cantJugadores; i++) {
                scanf("%d %d %d", &kills, &muertes, &asistencias);
                mvpPoints = pow((kills + (asistencias / 2.0)),
                                (kills / (muertes + 1.0)));
                if (mvpPoints > mvpMaxPoints) {
                    mvp = i + 1;
                    mvpMaxPoints = mvpPoints;
                }
            }
            printf("EL MVP DE LA PARTIDA ES EL JUGADOR %d CON %.1lf PUNTOS\n",
                   mvp, mvpMaxPoints);
        }
    } while (cantJugadores > 0);

    printf("---FIN---\n");
    return 0;
}