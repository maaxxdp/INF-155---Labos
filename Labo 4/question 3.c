/* Écrivez un programme qui saisit une valeur entière que vous stockerez
 * dans une variable valeur_saisie. Puis écrivez une instruction qui multiplie
 * la valeur de valeur_saisie par 2, sans utiliser la valeur_saisie dans votre expression.
 * Finalement, affichez la valeur de la variable valeur_saisie.*/
#include <stdio.h>
int main() {
    int valeur_saisie;
    int *pointeur;

    pointeur = &valeur_saisie;

    printf("Faire la saisie: ");
    scanf("%i", &valeur_saisie);

    *pointeur = *pointeur * 2;
    printf ("%i",valeur_saisie);
}