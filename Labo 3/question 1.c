#include <stdio.h>
/*Écrivez une fonction celcius_fahrenheit qui reçoit une valeur numérique
 *exprimée en degrés Celcius et retourne la conversion de cette valeur en
 *degrés Fahrenheit.*/

// Définition des sous programmes
double celsius_fahrenheit(double user_entry);


int main() {
    double user_entry;
    printf("Entrez la température: ");
    scanf("%lf",&user_entry);
    double resultat = celsius_fahrenheit(user_entry);
    printf("Fahrenheit: %.2lf",resultat);
}
// SOUS-PROGRAMMES
double celsius_fahrenheit(double user_entry) {
    // Conversion de Celcius à Fahrenheit
    double converted = 1.8*(user_entry)+32;
    return converted;
}