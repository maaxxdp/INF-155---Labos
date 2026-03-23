#include <stdio.h>

int main(void) {
    // Variables
    int nb_student;
    int groups;
    int nb_groups;
    int reste;

    // Le programme
    printf("Entrez le nombre d'etudiant: \n");
    scanf("%d", &nb_student);

    printf("Entrez le nombre par groupe: \n");
    scanf("%d", &groups);

    // Algorithme pour faire le # de groupe
   nb_groups = nb_student/groups;
    printf("le nombre de groupe est: %d \n", nb_groups);
    reste = nb_student%groups;
    printf("le nombre restant sans groupe est: %d \n", reste);



    return 0;
}