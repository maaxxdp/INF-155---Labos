/* QUESTION 2:
* Écrivez un programme qui lance un dé à 6 faces un million de fois et affiche la moyenne des lancers.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main(void)
{
    int nombre_aleatoire;
    int addition = 0;

    int *ptr_add = &addition;  // pointer to addition

    srand((unsigned int)time(NULL));

    for (int i = 0; i < 1000000; i++) {
        nombre_aleatoire = nb_aleatoire(1, 6);
        *ptr_add += nombre_aleatoire;  // add using pointer
        printf("nombre: %d\n", nombre_aleatoire);
    }

    float moyenne = (float)(*ptr_add) / 1000000;

    printf("Somme: %d\n", *ptr_add);
    printf("Moyenne: %f\n", moyenne);

    return EXIT_SUCCESS;
}
