#include <stdio.h>

// Dopo aver letto N numeri (interi), con N scelto dall'utente e non superiore ai 30 elementi,
// calcolare la somma e la media dei numeri pari, e dei numeri dispari (utilizzare %).
void main()
{
    int conto, numero, n, contatore=0, contatore1=0, pari = 0, dispari = 0;//dichiarazione delle variabili
    float media1, media;//dichiarazione della media
    printf("inserisci quanti numeri interi vuoi inserire\n");
    scanf("%d", &conto);//inserimento dei numeri
    while (conto < 0 || conto > 30)//controllo in caso l'inserimento sia sbagliato
    {
        printf("reinserisci l quantità dei numeri che vuoi inserire :\n");
        scanf("%d", &conto);
    }
    numero=conto;
    while ( numero >0)
    {
        numero=numero-1;
        printf("inserisci il numero che vuoi sommare\n ");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            pari = pari + n;//somma numeri pari
            contatore=contatore+1;//contatore che serve per capira quanti numeri abbiamo inserito
            
        }
        else
        {
            dispari = dispari + n;//somma numeri dispari
            contatore1=contatore1+1;//contatore che serve per capira quanti numeri abbiamo inserito
            
        }
    }
     printf("\nla somma dei numeri pari è di:%d",pari);
     printf("\nla somma dei numeri dispari è di:%d",dispari);
    if (pari > 0)
    {
        media = pari / contatore;//media numeri pari se è maggiore di 0
        printf("\nla media dei numeri pari è di: %.2f", media);
    }
    if (dispari > 0)
    {
        media1 = dispari / contatore;//media numeri dispari se minore di 0
        printf("\nla media dei numeri dispari è di: %.2f\n", media1);
    }
}