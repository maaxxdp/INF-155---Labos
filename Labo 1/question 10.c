#include <stdio.h>

int main(void) {
    // Variables

    double ciment_in;
    double sable_in;
    double gravier_in;

    double ratio_ciment;
    double ratio_sable;
    double ratio_gravier;



    // Programme
    printf("Ciment: \n");
    scanf("%lf", &ciment_in);

    printf("Sable: \n");
    scanf("%lf", &sable_in);

    printf("Gravier: \n");
    scanf("%lf", &gravier_in);

    ratio_ciment = ciment_in/350;
    ratio_sable = sable_in/680;
    ratio_gravier = gravier_in/1175;

    double min = ratio_ciment;
    if (ratio_sable < min) {
        min = ratio_sable;

    }
    if (ratio_gravier < min) {
        min = ratio_gravier;

    }
    printf("Le volume maximum est de %.2f", min);


}