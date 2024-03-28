#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void main()
{
    char Stringa[100] = "gg", copiaStringa[100] = "gg", risposta[100];
    char salvaLettere[100];
    int ripetute = 0;
    int lunghezzaCopia, lunghezza;
    char carattereAggiunto, carattereScelto;
    int posizioneEliminata;
    bool entrato = false;
    /*Scrivere un programma in C che dopo aver inserito una stringa a piacere permetta di:
   1) Eliminare 1 carattere scelto dall’utente ( o   più di 1 se si ripetono);
   2) Eliminare 1 carattere scelto dall’utente in  base alla sua posizione;
   3) Aggiungere 1  carattere scelto dall’utente alla fine della stringa;*/

    printf("Inserisci una stringa a piacere\n");
    scanf(" %s", &Stringa);

    // copia della stringa precedentemente inserita
    strcpy(copiaStringa, Stringa);

    lunghezzaCopia = strlen(Stringa);
    do
    {

        risposta[0] = "no";
        if (lunghezzaCopia == 0)
        {
            printf("Non sono presenti altri caratteri nella Stringa\n");
        }
        else
        {
            // inserimento del carattere che si vuole cancellare
            printf("Inserisci il carattere da cancellare dalla stringa\n");
            scanf(" %c", &carattereScelto);

            // inizializza entrato a false
            entrato = false;

            for (int i = 0; i < lunghezzaCopia; i++)
            {
                if (copiaStringa[i] == carattereScelto)
                {
                    // sposta di una posizione in meno tutti i caratteri in modo da cancellare quello che si vuole
                    for (int j = i; j < lunghezzaCopia; j++)
                    {
                        // stribuisce il valore a copiaStringa
                        copiaStringa[j] = copiaStringa[j + 1];
                    }
                    lunghezzaCopia--;
                    entrato = true;
                }
            }
            if (!entrato)
            {
                // lo stampa solo se non è entrato nell'if
                printf("Il carattere inserito non è presente nella stringa\n");
            }
            else
            {
                // stampa la stringa senza carattere
                printf("La parola senza carattere è: %s\n", copiaStringa);
            }
            // inserimento della risposte dell'utente se vuole cancellare altre lettere
            printf("Vuoi cancellare altre lettere? (si/no): ");
            scanf(" %s", risposta);

            // Continua a chiedere finché la risposta non è "si" o "no"
            while (strcmp(risposta, "no") != 0 && strcmp(risposta, "NO") != 0 && strcmp(risposta, "si") != 0 && strcmp(risposta, "SI") != 0)
            {
                printf("Risposta non valida. Reinserisci (si/no): ");
                scanf(" %s", risposta);
            }
        }

        // ciclo che si ripete se la risposta è si
    } while (strcmp(risposta, "si") == 0 || strcmp(risposta, "SI") == 0);

    int lunghezzaCopia3 = strlen(Stringa);
    char copiaStringa3[lunghezzaCopia3];
    strcpy(copiaStringa3, Stringa);
    int posizione;

    do
    {

        risposta[0] = "no";
        if (lunghezzaCopia3 == 0)
        {
            printf("Non sono presenti altri caratteri nella Stringa\n");
        }
        else
        {
            // inserimento della posizione
            printf("Inserisci la posizione della stringa %s che vuoi eliminare\n", copiaStringa3);
            scanf(" %d", &posizione);

            // inizializza entrato a false
            entrato = false;

            for (int i = 0; i < lunghezzaCopia3; i++)
            {
                if (i + 1 == posizione)
                {
                    // sposta di una posizione in meno tutti i caratteri in modo da cancellare quello che si vuole
                    for (int j = i; j < lunghezzaCopia3; j++)
                    {
                        // stribuisce il valore a copiaStringa
                        copiaStringa3[j] = copiaStringa3[j + 1];
                    }
                    copiaStringa3[lunghezzaCopia3] = '\0';
                    entrato = true;
                }
            }
            lunghezzaCopia3--;
            if (!entrato)
            {
                // lo stampa solo se non è entrato nell'if
                printf("La posizione insertita non è presente nella stringa\n");
            }
            else
            {
                // stampa la stringa senza carattere
                printf("La parola senza il carattere nella posizione inserita è: %s\n", copiaStringa3);
            }
            // inserimento della risposte dell'utente se vuole cancellare altre lettere
            printf("Vuoi cancellare altre lettere? (si/no): ");
            scanf(" %s", risposta);

            // Continua a chiedere finché la risposta non è "si" o "no"
            while (strcmp(risposta, "no") != 0 && strcmp(risposta, "NO") != 0 && strcmp(risposta, "si") != 0 && strcmp(risposta, "SI") != 0)
            {
                printf("Risposta non valida. Reinserisci (si/no): ");
                scanf(" %s", risposta);
            }
        }

        // ciclo che si ripete se la risposta è si
    } while (strcmp(risposta, "si") == 0 || strcmp(risposta, "SI") == 0);

    // inizializzo la lunghezza della stringa
    int lunghezzaCopia2 = strlen(Stringa);
    // inizializzazione della stringa che va modificata con

    char copiaStringa2[lunghezzaCopia2];
    // copia con la stringa iniziale
    strcpy(copiaStringa2, Stringa);
    do
    {
        // inserimento del carattere da aggiungere
        printf("Inserisci un carattere da aggiungere alla stringa %s\n", copiaStringa2);
        scanf(" %c", &carattereAggiunto);
        lunghezzaCopia2++;

        // aggiungo il carattere alla stringa
        copiaStringa2[lunghezzaCopia2 - 1] = carattereAggiunto;
        copiaStringa2[lunghezzaCopia2] = '\0';

        // stampa della stringa
        printf("La stringa con il carattere aggiunto è: %s\n", copiaStringa2);

        // inserimento della risposte dell'utente se vuole cancellare altre lettere
        printf("Vuoi aggiungere altri caratteri? (si/no): ");
        scanf(" %s", risposta);

        // Continua a chiedere finché la risposta non è "si" o "no" controllando la risposta
        while (strcmp(risposta, "no") != 0 && strcmp(risposta, "NO") != 0 && strcmp(risposta, "si") != 0 && strcmp(risposta, "SI") != 0)
        {
            printf("Risposta non valida. Reinserisci (si/no): ");
            scanf(" %s", risposta);
        }
    } while (strcmp(risposta, "si") == 0 || strcmp(risposta, "SI") == 0);
}