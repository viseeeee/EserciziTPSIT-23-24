#include <stdio.h>
/*Una banca vuole conoscere alcune informazioni sulle proprie azioni detenute in portafoglio.
Scrivere il programma in c che dopo aver inserito da tastiera la denominazione dell’azione e il suo prezzo
determini e visualizzi in Output:
1) La somma dei prezzi delle azioni;
2) La media dei prezzi delle azioni;
3) L’azione con il prezzo massimo;
4) L’azione con il prezzo minimo
5) La media dei prezzi delle azioni con un importo compreso tra 2,50 e 3,50 euro, estremi inclusi.
L’inserimento termina con la parola “terminato”.
Il programma deve permettere il reinserimento del prezzo se è pari a zero o inferiore.*/

void main(){
    float somma=0,media,somma1,media1;
    float valoreAzioni;
    float massimo=0,minimo=0;
    int azioni;
    int Contatore=0,Contatore1;
    float valorePrecedente;
    int scelta;
    char scelta2 = 's';
    printf("inserisci il numero di azioni che vuoi inseririre\n");
    scanf("%d",&azioni);//fà inserire il numero di azioni
    if (azioni==0)
    {
        printf("hai inserito 0 azioni");//compare a schermo in caso le azioni siano uguali a 0
    }

    if (azioni>0)
    {
        for (int i = azioni; i>0; i--)
    {
        printf("inserisci valore dell'azione\n");
        scanf("%f",&valoreAzioni);
        Contatore++;//contatore che aumenta ad ogni ciclo che serve anche per la media
        somma=somma+valoreAzioni;//somma si tutti i numeri
    
        if(valoreAzioni>massimo){
            massimo=valoreAzioni;// serve per trovare il numero massimo
        }
        if(Contatore==1){
            minimo=valoreAzioni;//solo per la prima volta il valore minimo assume un valore per far si che sia diverso da 0
        }
        if(valoreAzioni<minimo){
            minimo=valoreAzioni;//serve per trovare il numero minimo
        }
    if(valoreAzioni>=2.50 && valoreAzioni<=3.50){
        Contatore1++;
        somma1=somma1+valoreAzioni;//somma dei valori compresi tra 2,5 e 3,5
    }
    }
    if (Contatore1!=0)
    {
        media1=somma1/Contatore1;//medide dei numero compresi tra 2,5 e 3,5 
    }
    media= somma/Contatore;//media di tutti i numeri
    do
    {
        printf("cosa vuoi vedere?\n");
    printf("1) La somma dei prezzi delle azioni;\n"
    "2) La media dei prezzi delle azioni;\n"
    "3) L’azione con il prezzo massimo;\n"
    "4) L’azione con il prezzo minimo\n"
    "5) La media dei prezzi delle azioni con un importo compreso tra 2,50 e 3,50 euro, estremi inclusi\n");
    scanf("%d",&scelta);
    if (scelta==1)
    {
        printf("la somma delle azioni è di:%.2f\n",somma);
    }
    if (scelta==2)
    {
        printf("la media delle azioni è di:%.2f\n",media);
    }
    if (scelta==3)
    {
        printf(" l'azione maggiore è di: %.2f\n",massimo);
    }
    if (scelta==4)
    {
        printf(" l'azione minore è di: %.2f\n",minimo);
    }
    if (scelta==5)
    {
        printf(" la media delle azioni comprese tra 2,50 e 3,50 è di: %f\n",media1);
    }
     printf("Vuoi vedere altro? (s/n)\n");
        scanf(" %c", &scelta2);  // Aggiunto uno spazio prima di %c per consumare eventuali newline residui

        while (scelta2 != 's' && scelta2 != 'n') {
            printf("Reinserisci la scelta\n");
            scanf(" %c", &scelta2);
        }

    } while (scelta2 == 's');
    printf("terminato");
}
}
