/* QUESTION 1:
* Écrivez un programme qui lance cinq dés à 6 faces et affiche les cinq valeurs obtenues.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * FONCTION: nb_aleatoire
 * Cette fonction retourne une valeur aleatoire dans l'intervalle entier
   [min, max]. Chaque valeur possede la meme probabilite d'etre generee.

   PARAMETRES :
        - min : La plus petite valeur pouvant etre generee (type : int).
        - max : La plus grande valeur pouvant etre generee (type : int).

    VALEUR DE RETOUR : Une valeur se trouvant dans l'intervalle
                       [min, max]  (type : int).

    ANTECEDENTS :
        - On suppose que la fonction srand a prealablement ete appelee.
 */
int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main(void)
{
    int nombre_aleatoire;  /* Recoit un nombre aleatoire. */

    /* On initialise le generateur de nombres aleatoires. */
    srand((unsigned int)time(NULL));
    rand();
    for (int i=0; i < 5; i++) {
        /* On genere un nombre dans l'intervalle [1, 10]. */
        nombre_aleatoire = nb_aleatoire(1, 6);

        /* On affiche le nombre genere. */
        printf("Nombre du dé %d: %d\n", i+1, nombre_aleatoire);
    }
    return EXIT_SUCCESS;
}
