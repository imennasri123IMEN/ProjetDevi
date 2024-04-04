#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char hasard() {
    int choix = rand() % 3;
    if (choix == 0) return 'R';
    else if (choix == 1) return 'P';
    else return 'C';
}

void comparaison(char joueur, char ordinateur) {
    if (joueur == ordinateur) {
        printf("Egalite!\n");
    } else if ((joueur == 'R' && ordinateur == 'C') || 
               (joueur == 'P' && ordinateur == 'R') || 
               (joueur == 'C' && ordinateur == 'P')) {
        printf("Le joueur a gagne!\n");
    } else {
        printf("L'ordinateur a gagne!\n");
    }
}


int main() {
    srand(time(NULL)); 
    char choix_joueur, choix_ordi;

    printf("Choisissez Roche (R), Papier (P) ou Ciseaux (C) : ");
    scanf(" %c", &choix_joueur);

   
    if (choix_joueur != 'R' && choix_joueur != 'P' && choix_joueur != 'C') {
        printf("Choix invalide!\n");
        return 1; 
    }

    
    choix_ordi = hasard();

    printf("Le joueur a choisi : %c\n", choix_joueur);
    printf("L'ordinateur a choisi : %c\n", choix_ordi);


    comparaison(choix_joueur, choix_ordi);

    return 0; 
}
