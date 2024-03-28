
#include <stdio.h>
#include <stdbool.h>
void main()
{
    /*Scrivere un programma in c che dopo aver inserito un vettore di N numeri controlli l’esistenza di
    un numero richiesto successivamente all’utente. In caso affermativo visualizzare quante volte si
    ripete il numero e che posizione/i occupa nel vettore utilizzato.*/
    int quantita;
    int numero;
    char risposta;
    bool controllo=false;
    printf("\ninserisci quanti numeri vuoi inserire\n");
    scanf("%d", &quantita);
    int primoArr[quantita];
    int secondoArr[quantita];
    // inserimento dei numeri nel primo array
    printf("\ninserici i numeri nel primo array\n");
    for (int i = 0; i < quantita; i++)
    {
        printf("inserisci un numero nella posizione %d\n", i + 1);
        scanf("%d", &primoArr[i]);
    }

    printf("\n ");
    // inserimento dei numeri nel secondo array
    printf("\ninserici i numeri nel secondo array\n");
    for (int j = 0; j < quantita; j++)
    {
        printf("inserisci un numero nella posizione %d\n", j + 1);
        scanf("%d", &secondoArr[j]);
    }
    do
    {
        printf("\ninserisci il numero che vuoi controllare\n");
        scanf("%d", &numero);
        controllo=false;
        for (int k = 0; k < quantita; k++)
        {
            if (primoArr[k] == numero)
            {
                printf("hai inserito %d nel primo array nella posizione %d", numero, k+1);
                controllo=true;
            }
            else if (secondoArr[k] == numero)
            {
                printf("hai inserito %d nel secondo array nella posizione %d", numero, k+1);
                controllo=true;
            }
            else {
                if (!controllo && k==quantita-1)
                {
                    printf("numero non presente\n");
                }
            }
        }
        printf("\nvuoi controllare se hai inserito un'altro numero(s/n)\n");

        scanf(" %c",&risposta);
        while (risposta != 's' && risposta != 'n')
        {
            printf("\nreinserisci la risposta\n");
            scanf(" %c", &risposta);
        }
    } while (risposta == 's');
}