#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand(time(NULL));
    int tableau [40] = {0};
    for (int i = 0; i < 40; i++) {
        int num = (rand()%100+1);
        tableau[i] = num;
        printf("tableau: %i\n", tableau[i] );
    }
    return 0;
}
