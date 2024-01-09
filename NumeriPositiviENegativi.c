#include <stdio.h>
/*Scrivere un programma in C che, dopo aver letto N numeri (n scelto dall'utente) calcoli e visualizzi a video la somma dei numeri positivi,
 la somma dei numeri negativi in valore assoluto, il conteggio dei numeri negativi e positivi, la media dei numeri positivi e negativi.*/

void main(){
    //dichiarazione varibili
    int numero,volte=0;
    int Negativo=0,Positivi=0;
    int ContoPositivi=0,ContoNegativi=0;
    float mediaPositivi=0,mediaNegativi=0;
    int SommaNgeativi,SommaPositivi;
    int Conteggio;
    printf("inserisci la quantità di numeri che vuoi inserire\n");
    scanf("%d",&volte);//inserimento dei numeri
    Conteggio=volte;
    while (volte>0)//ciclo che fà inserire i numeri
    {
        volte=volte-1;
        printf("inserisci il numero che vuoi inserire \n");
        scanf("%d",&numero);
    
    if (numero>0)//
    {
        ContoPositivi++;//serve per contare i numeri positivi che abbiamo inserito
        Positivi=Positivi+numero;
        printf("la somma dei numeri positivi è di: %d \n",Positivi);
    }
    if (numero<0)
    {   
        
        ContoNegativi++;//serve per contare i numeri negativi che abbiamo inserito
        numero=numero*(-1);//trasforma il numero negativo in positivo
        Negativo=Negativo+numero;//somma numeri negativi
        printf("la somma dei numeri negativi è di: %d \n",Negativo);  
    }
    if(numero=0){//mostra il messaggio in caso il numero sia uguale a 0
        printf("hai inserito 0 che non è un numero nè pari nè dispari");
    }
    }   
    if(ContoPositivi>0){
        mediaPositivi=Positivi/ContoPositivi;//fà la media dei numeri positivi
        printf("la media dei numeri positivi è di: %.2f \n", mediaPositivi);
    }
    if(ContoNegativi>0){
        mediaNegativi=Negativo/ContoNegativi;//fà la media dei numeri negativi
        printf("la media dei numeri negativi è di: %.2f \n", mediaNegativi);
    }

    
}