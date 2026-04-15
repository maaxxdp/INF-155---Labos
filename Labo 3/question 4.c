#include <stdio.h>
#include <math.h>
double log_b(double nb, double base) {
    double resultat = (log(nb)/log(base));
    return resultat;
}
int main() {
    int a;
    printf("chiffre: ");
    scanf("%i", &a);

   int resultat_div = log_b(a,10);

    printf("nb de chiffre: %i", resultat_div + 1);
}