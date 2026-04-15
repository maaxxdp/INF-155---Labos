#include <stdio.h>

int retour(int nombre, int position) {
    int temp = nombre;
    int taille = 0;

    while (temp > 0) {
        temp /= 10;
        taille++;
    }

    if (position < 0 || position >= taille) {
        return -1;
    }

    int puissance = taille - position - 1;

    for (int i = 0; i < puissance; i++) {
        nombre /= 10;
    }

    return nombre % 10;
}
int main() {
    int chiffre, place;
    printf("chiffre: ");
    scanf("%i",&chiffre);
    printf("place: :");
    scanf("%i",&place);

    int space = retour(chiffre,place);
    printf("nombre: %i",space);
    return 0;
}