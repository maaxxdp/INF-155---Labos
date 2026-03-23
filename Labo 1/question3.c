#include <stdio.h>

int main(void) {
    // Variables

    double tension;
    double résistance;


    // Le code
    printf("quelle est la tension ?\n");
    scanf("%lf", &tension);

    printf("quelle est la resistance ?\n");
    scanf("%lf", &résistance);


    printf("intensite %f", tension / résistance);

    return 0;
}