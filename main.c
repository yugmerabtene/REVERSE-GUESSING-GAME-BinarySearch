#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int continuer = 1;
    int nombreSecret = 0; // Initialise le nombre secret à 0

    while (continuer) {
        printf("Menu Principal\n");
        printf("1. Choisir le nombre à deviner\n");
        printf("2. Jouer\n");
        printf("3. Quitter\n");

        int choix;
        scanf("%d", &choix);

        switch (choix) {
            case 1: // Choisir le nombre à deviner
                printf("Entrez un nombre que l'ordinateur devra deviner : ");
                scanf("%d", &nombreSecret);
                printf("Vous avez choisi le nombre %d.\n", nombreSecret);
                break;

            case 2: // Jouer
                if (nombreSecret == 0) {
                    printf("Veuillez d'abord choisir un nombre à deviner.\n");
                } else {
                    int min = 1;
                    int max = 100000000;
                    int tentative = 0;
                    clock_t debut = clock();

                    while (1) {
                        int supposition = (min + max) / 2;
                        tentative++;

                        printf("L'ordinateur a deviné %d en %d tentatives.\n", supposition, tentative);

                        if (supposition == nombreSecret) {
                            clock_t fin = clock();
                            double temps = (double)(fin - debut) / CLOCKS_PER_SEC * 1000.0; // Temps en millisecondes
                            printf("L'ordinateur a trouvé le nombre secret %d en %.2f millisecondes!\n", nombreSecret, temps);
                            break;
                        } else if (supposition < nombreSecret) {
                            min = supposition + 1;
                        } else {
                            max = supposition - 1;
                        }
                    }

                    // Demande si l'utilisateur veut rejouer
                    printf("Voulez-vous rejouer ? (1 pour oui, 0 pour non) : ");
                    scanf("%d", &continuer);
                }
                break;

            case 3: // Quitter
                continuer = 0;
                break;
        }
    }

    return 0;
}
