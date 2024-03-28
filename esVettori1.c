#include <stdio.h>
void main(){
    int quantita;
    printf("inserisci la quantita di numeri che vuoi inserire\n");
    scanf("\n %d",&quantita);

    float vettore1[quantita];
    float vettore2[quantita];
    float sum[quantita];

    //inserimento dei numeri nel primo array 
    printf("inserici i numeri nel primo array");
    for (int i = 0; i < quantita; i++)
    {
        printf("\ninserisci un numero nella posizione %d ",i+1);
        scanf("\n %f",&vettore1[i]);

    }
    printf("\n ");
    //inserimento dei numeri nel secondo array
    printf("\ninserici i numeri nel secondo array");
       for (int j = 0; j < quantita; j++)
    {
        printf("\ninserisci un numero nella posizione %d ",j+1);
        scanf("\n %f",&vettore2[j]);
        
    }

    //calcolo della somma e mostra in output il risultato
    for (int k = 0; k < quantita; k++)
    {
        sum[k]=vettore1[k]+vettore2[k];
        printf("\n la somma della cella %d è %.2f ",(k+1),sum[k]);
    }
    
}