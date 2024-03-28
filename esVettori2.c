#include <stdio.h>
void main()
{
    /*Scrivere un programma in c che dopo aver inserito un vettore di N numeri interi separi il vettore
    inserito in 2 ulteriori vettori il primo contenente i numeri pari ed il secondo con i numeri dispari.*/
    int quantita;
    int contatore1 = 0, contatore2 = 0;
    printf("\ninserisci quanti numeri vuoi inserire\n");
    scanf("%d", &quantita);
    int pari[quantita];
    int dispari[quantita];
    int primoArr[quantita];
    int secondoArr[quantita];
    // inserimento dei numeri nel primo array
    printf("\ninserici i numeri nel primo array\n");
    for (int i = 0; i < quantita; i++)
    {
        printf("inserisci un numero nella posizione %d\n", i + 1);
        scanf("%d",&primoArr[i]);
    }

    printf("\n ");
    // inserimento dei numeri nel secondo array
    printf("\ninserici i numeri nel secondo array");
    for (int j = 0; j < quantita; j++)
    {
        printf("\ninserisci un numero nella posizione %d\n", j + 1);
        scanf("%d", &secondoArr[j]);
    }

    for (int k = 0; k < quantita; k++)
    {
        if (primoArr[k] % 2 == 0)
        {
            pari[contatore1] = primoArr[k];
            contatore1++;
        }
        else
        {
            dispari[contatore2] = primoArr[k];
            contatore2++;
        }

        if (secondoArr[k] % 2 == 0)
        {
            pari[contatore1] = secondoArr[k];
            contatore1++;
        }
        else
        {
            dispari[contatore2] = secondoArr[k];
            contatore2++;
        }
    }
    printf("\nI numeri dispari che hai inserito sono:\n");
    for (int l = 0; l < contatore2; l++)
    {
        printf("%d\n",dispari[l]);
    }
    printf("\nI numeri pari che hai inserito sono:\n");
    for (int h = 0; h < contatore1; h++)
    {
        printf("%d\n",pari[h]);
    }
}