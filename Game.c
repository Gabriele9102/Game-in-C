#include <stdio.h>

int main() {
    char nome_utente[50];  // aggiunto un array per il nome dell'utente
    int domandaUno = 0;
    int domandaDue = 0;
    int domandaTre = 0;
    int score = 0;

    printf("Se vuoi giocare premi 1, altrimenti premi 2\n");

    int scelta;
    scanf("%d", &scelta);

    if (scelta == 1) {
        printf("Inizia il gioco\nScrivi il tuo nome: ");
        scanf("%s", nome_utente);

        printf("Quanto fa 2+2? ");
        scanf("%d", &domandaUno);

        if (domandaUno == 4) {
            printf("corretto\n");
            score++;
        } else {
            printf("sbagliato\n");
        }

        printf("Quanto fa 3+3? ");
        scanf("%d", &domandaDue);

        if (domandaDue == 6) {
            printf("corretto\n");
            score++;
        } else {
            printf("sbagliato\n");
        }

        printf("Quanto fa 4+4? ");
        scanf("%d", &domandaTre);

        if (domandaTre == 8) {
            printf("corretto\n");
            score++;
            printf("-------------------");
            printf("\nGiocatore: %s\n",nome_utente);
            printf("il tuo risultato finale è %d\n",score);
            restart();
            
        } else {
            printf("sbagliato\n");
            printf("-------------------");
            printf("\nGiocatore: %s\n",nome_utente);
            printf("\n il tuo risultato finale è %d\n",score);
            restart();
            
        }
    } else {
        printf("Fine del gioco\n");
        restart();
    }

    return 0;
}

void restart()
{
    main();
}

