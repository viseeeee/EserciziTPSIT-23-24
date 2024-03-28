#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char control(bool verifica)
{
    char inserimento;
    if (verifica==true)
    {
        scanf(" %c",&inserimento); // Aggiunto uno spazio prima del %c per ignorare eventuali caratteri di spaziatura residui
    }
    return inserimento;
}

float zeroIns(bool zero)
{
    float numero2;
    if (zero==true)
    {
        scanf("%f",&numero2);
    }
    return numero2;
}

void main()
{
    char inserimento;
    char risposta;
    int valore[4];
    float numero1, numero2;
    float risultato;
    bool zero=false;
    bool verifica=false;
    do
    {
        if (verifica == false)
        {
            // primo calcolo si dà inserendo entrambi i numeri
            printf("inserisci l'operazione che vuoi fare\nnumero(+,-,/,*)numero \n");
            scanf(" %f %c %f",&numero1,&inserimento,&numero2);
        }
        else
        {
            // calcolo con l'utilizzo del risultato
            printf("inserisci l'operazione che vuoi fare (+,-,/,*)\n");
            printf(" %.f",numero1);
            scanf(" %c %f",&inserimento,&numero2);
        }
        verifica = false;
        // controllo dell'operazione in caso sia diversa da quelle da inserire
        while (inserimento != '+' && inserimento != '-' && inserimento != '/' && inserimento != '*')
        {
            verifica=true;
            printf("hai sbagliato a inserire l'operazione(+,-,/,*)\n");
            inserimento=control(verifica); // Corretto l'assegnamento della variabile inserimento
        }

        // switch case che svolge i calcoli
        switch (inserimento)
        {
        case '+':
            risultato=numero1+numero2;
            break;
        case '/':
            if (numero2 == 0)
            {
                do
                {
                    printf("la divisione è impossibile, reinserisci il numero\n");
                    zero=true;
                    numero2=zeroIns(zero);
                } while (numero2==0);
            }
            risultato=numero1/numero2;
            break;
        case '*':
            risultato=numero1*numero2;
            break;
        case '-':
            risultato=numero1-numero2;
            break;
        }

        // mostra il risultato
        printf("il risultato è %.2f\n",risultato);
        numero1=risultato;
        // inserimento della risposta dell'utente
        printf("vuoi fare altre operazioni con questo risultato?(s/n) \n");
        verifica = true;
        scanf(" %c",&risposta);

        // Il programma si ripete se la risposta è 's' o 'S'
    } while (risposta=='s' || risposta=='S');
}
