/*Écrire une fonction permuter qui prend deux variables entières entier1 et entier2.
 *Votre fonction doit permuter les valeurs de entier1 et entier2. Depuis votre fonction main,
 *testez le fonctionnement de votre fonction permuter.*/

#include <stdio.h>
void permuter(int *a, int *b) {
    int pointeur_copy;
    pointeur_copy = *a;

    *a=*b;
    *b=pointeur_copy;

}
int main() {
    int a;
    int b;
    printf("Entrez le chiffres a: ");
    scanf("%i",&a);
    printf("Entrez le chiffres b: ");
    scanf("%i",&b);

    permuter(&a,&b);
    printf("chiffre a : %i\n", a);
    printf("chiffre b : %i", b);

    return 0;
}