#include <stdio.h>
/*1 livre = 20 shillings
 *1 shilling = 12 pennys
 * 1 penny
 *
 * entry = penny
 * conversion en libre shilling et pennys
*/

int main(void) {
    // Variables
    int penny_entry;
    int nb_livre;
    int nb_shilling;
    int nb_penny;
    printf("Entrez le nombre de penny: ");
    scanf("%d", &penny_entry);

    nb_livre = penny_entry/20;
    penny_entry = penny_entry%20;

    nb_shilling = penny_entry/12;
    nb_penny = penny_entry%12;

    printf("%i livre(s) %i shilling(s) %i penny(s).\n",
    nb_livre, nb_shilling, nb_penny);

    return 0;
}