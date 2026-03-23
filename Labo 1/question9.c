#include <stdio.h>

int main(void) {
    // Variables
    double vitesse;
    double dimension;
    double viscosite;
    double Reynold;

    // Programme
    printf("Entrez la valeur de la vitesse du fluide: ");
    scanf("%lf",&vitesse);

    printf("Entrez la dimension caracteristique: ");
    scanf("%lf",&dimension);

    printf("Entrez la viscosite du fluide: ");
    scanf("%lf",&viscosite);

    Reynold = vitesse*dimension/viscosite;

    if (Reynold > 4000){
        printf("Turbulent");
    }
    else if (Reynold >= 2000) {
        printf("Transitoire");
    }
    else {
        printf("Laminaire");
    }

    return 0;
}