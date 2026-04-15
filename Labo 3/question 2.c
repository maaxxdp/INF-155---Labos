#include <stdio.h>
#include <math.h>
/*La librairie "math.h" fournit une fonction log(double n) qui calcule
 *le logarithme népérien de n. Cependant, nous aimerions calculer le logarithme
 *dans n'importe quelle base.
 *Écrire la fonction log_b qui prend deux valeurs: le nombre n dont on veut calculer
 *le logarithme (réel), ainsi que la base b (entier).
 *Votre fonction doit renvoyer le logarithme de n dans la base b.*/
double log_b(double a, double b) {
    double resultat = (log(a)/log(b));
    return resultat;
}
int main() {
    double a,b;
    printf("Entrez le nombre reel: ");
    scanf("%lf",&a);
    printf("\nEntrez la base: ");
    scanf("%lf",&b);

    //
    double log_result = log_b(a,b);
    printf("Le resultat est: %lf", log_result);

    return 0;
}