#include <stdio.h>

int main(void) {
    int nb1;
    int nb2;
    printf("Entrez 2 nombres entier: \n");
    scanf("%d %d", &nb1, &nb2);

    if (nb1 > nb2) {
        printf("%d est le plus petit de ces deux nombres \n",nb2);
    }
    else if (nb1 < nb2) {
        printf("%d est le plus petit de ces deux nombres \n",nb1);
    }
    else if (nb1 == nb2) {
        printf("les deux nombres sont egaux");
    }
    else {
        printf("ce n'est pas un nombre.");
    }
    return 0;
}