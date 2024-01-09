#include <stdio.h>
//Su una somma di denaro (relativa all'acquito di un prodotto) si vuole applicare uno sconto in base all'importo inserito seguendo il seguente schema:
//           da 0 a 500€ sconto del 10%;
 //           da 501 a 1000 sconto del 20%;
//            oltre i 1001 sconto 30%;
// Il programma dopo aver calcolato e visualizzato a video lo sconto ed il prezzo netto deve permettere di re-inserire
//ulteriori somme di denaro.

int main(){
    int prezzo;//dichiarazione del prezzo iniziale
    float PrezzoScontato,finale;//dichiarazione del prezzo finale e anche dello sconto
    const int iva1=10,iva2=20,iva3=30;//dichiarazione dell'iva che è una costant
    printf("inserisci il denaro\n");
    scanf("%d",&prezzo);
    while (prezzo<0)
    {
        printf("reinserisci il prezzo\n");
        scanf("%d",&prezzo);
    }
    if(prezzo>=0 && prezzo<=500){
    //c'è lo sconto del 10%
    PrezzoScontato=prezzo*iva1/100;
    finale=prezzo-PrezzoScontato;
    printf("il prezzo finale è di: %.2f",finale);
    }
    if(prezzo>=501 && prezzo<=1000){
    //c'è lo sconto del 20%
    PrezzoScontato=prezzo*iva1/100;
    finale=prezzo-PrezzoScontato;
    printf("il prezzo finale è di:%.2f",finale);
    }
    if(prezzo>=1001){
    //c'è lo sconto del 30%
    PrezzoScontato=prezzo*iva3/100;
    finale=prezzo-PrezzoScontato;
    printf("il prezzo finale è di: %.2f",finale);
    }
return 0;
}