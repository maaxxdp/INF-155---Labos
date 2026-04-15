/*Écrivez une fonction afficher_adresse qui prend une variable entière
 *en paramètre et qui affiche à l'écran l'adresse mémoire de la variable
 *en paramètre. Ensuite, dans votre fonction main, déclarez une variable
 *entière ma_var et affichez son adresse à l'écran. Finalement, appelez la fonction
 *afficher_adresse depuis votre main en lui fournissant la variable ma_var en paramètre
*/

#include <stdio.h>
void afficher_adresse (int entier) {
    printf("adresse : %p \n", &entier);
}
int main() {
    int ma_var = 10;
    printf("adresse: %p \n", &ma_var);
    afficher_adresse(ma_var);
    return 0;
}