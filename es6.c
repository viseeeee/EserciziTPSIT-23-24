
#include <stdio.h>
#include <string.h>

float Media(float voti[],int numero){
float media;
float somma=0;
for (int k = 0; k < numero; k++)
{
    somma=somma+voti[k];
}
media=somma/numero;
return media;
}

float Massimo(float voti[],int numero){
    float massimo=0;
    for (int i = 0; i < numero; i++)
    {
        if (i==0 || voti[i]>massimo)
    {
        massimo=voti[i];
    }
    }
    return massimo;
}

float Minimo(float voti[],int numero){
    float minimo;
    for (int i = 0; i < numero; i++)
    {
        if (i==0 || voti[i]<minimo)
    {
            minimo=voti[i];
    }
    }
    return minimo;
}

int Sufficente(float voti[],int numero){
    int sufficente;
    for (int i = 0; i < numero; i++)
    {
        if (voti[i]>=6)
    {
            sufficente++;
    }
        
    }
    return sufficente;
}

int Estremi(float voti[],int numero){
int estremi=0;
for (int i = 0; i < numero; i++)
{
    if (voti[i]>=7.50 && voti[i]<=10)
    {
        estremi++;
    }
}
    return estremi;
}


void main(){
/*Scrivere un programma in C che dopo aver inserito
i cognomi e i voti di una classe di studenti
determini e/o verifichi: 
1 La media dei voti visualizzando, inoltre il numero di studenti inseriti;   
 2 Il voto massimo, il voto minimo ed I relativi cognomi degli studenti  
 3 Il numero degli studenti che hanno una valutazione sufficiente o superiore
 4 Il numero degli studenti che hanno una valutazione insufficiente o inferiore;   
 5 Il numero di studenti che hanno un voto compreso tra 7.50 e 10 estremi inclusi.
Il programma deve permettere il re-inserimento degli studenti e dei relativi voti.*/
int numero;
char nomi[20];
float voti[20];
float media;
int estremi;
int contatore=0;
float massimo,minimo;
int sufficente=0;
int insufficente;
printf("quanti studenti vuoi inserire?(0/20)\n");
scanf("%d",&numero);
while (numero<=0 || numero>20){
        printf("\n reiserisci il numero degli studenti ");
        scanf("%d",&numero);
}
for (int i = 0; i < numero; i++)
{
    printf("inserisci i nomi dello studente %d\n",(i+1));
    scanf("%s",&nomi[i]);
    printf("inserisci il voto dello studente\n");
    scanf("%f",&voti[i]);
    while (voti[i]<0 && voti[i]>10)
    {
        printf("il voto che hai inserito è sbagliato, reiserisci il voto");
        scanf("%f",&voti[i]);
    }
    
    }
printf("il numero degli studenti che hai inserito è: %d \n",numero);
media=Media(voti,numero);
printf("la media è: %.2f \n",media);
massimo=Massimo(voti,numero);
printf("il voto massimo è: %.2f \n",massimo);
minimo=Minimo(voti,numero);
printf("il voto minimo è: %.2f \n", minimo);
sufficente=Sufficente(voti,numero);
printf("gli studenti che hanno una valutazione sufficente son: %d \n",sufficente);
insufficente=numero-sufficente;
printf("il numero degli studenti che hanno una valutazione insufficente sono: %d \n",insufficente);
estremi=Estremi(voti,numero);
printf("i voti compresi tra 7.50 e 10 sono: %d \n",estremi);
}
