#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    // Variables

    double grav = 9.81;
    double mass_vol = 1.2;
    double rayon;
    double masse;

    // Le code
    printf("Quelle est le rayon de la boule: ");
    scanf("%lf", &rayon);


    printf("Quelle est la masse de la boule: ");
    scanf("%lf", &masse);

    double vit = sqrt((2*masse*grav)/(0.5*mass_vol*rayon*rayon*M_PI));

    printf("%lf\n", vit);

    return 0;
}