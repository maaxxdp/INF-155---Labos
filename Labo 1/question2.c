#include <stdio.h>

int main(void) {
    // Variables
    float entry;
    float calories = 0.2388459;


    // Le code
    printf("quel est le nombre de watt ?\n");
    scanf("%f", &entry);

    printf("%f calories par secondes\n",calories*entry);

    return 0;
}