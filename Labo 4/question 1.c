/*Écrire un programme qui déclare deux variables: une variable entière var_entiere et
 *variable réelle (double) var_reelle. Votre programme doit afficher l'adresse et la
 *taille de chacune des variables. */

#include <stdio.h>

int main() {
    // declarer les variables
    int var_entiere;
    double var_reelle;

    printf("Entier : ");
    scanf("%i",&var_entiere);
    printf("Reelle : ");
    scanf("%d",&var_reelle);

    printf("Chiffre :%i, %p, %i \n", var_entiere,&var_entiere, sizeof(var_entiere));
    printf("Chiffre :%i, %p, %i ", var_reelle,&var_reelle, sizeof(var_reelle));
    return 0;
}