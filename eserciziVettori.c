#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int controllolettere(char stringaInserita[],int lunghezzaStringa){

for (int i = 0; i < lunghezzaStringa; i++) {
while (!(stringaInserita[i]>'a' && stringaInserita[i]<'z' && stringaInserita[i]>'A' &&stringaInserita[i]<'Z')){
    
    return 0;
}
}
return 1;
}

void out(char stringaInserita[],int lunghezzaStringa){
    printf("Le lettere che erano in posizione pari sono:\n");
    printf("%s \n",stringaInserita);
}
int controllo(char stringaInserita[],int lunghezzaStringa,char vocali[]){
    int numeroVocali=0;
    for(int i=0;i < lunghezzaStringa;i++){
        for (int l = 0; l < 10; l++)
        {
        if (stringaInserita[i]==vocali[l])
        {
            numeroVocali++;
            break;
        }
        }
    }
    return numeroVocali;
}
void main(){
/*
Scrivere un programma in C che dopo aver inserito una stringa a piacere determini e o verifichi:
1) Il numero di consonanti e vocali contenute;
2) Che contenga solo lettere;
3) Il conteggio di una lettera (se presente) scelta dall’utente;
4) Crei 2 ulteriori stringhe che contengano 1 le lettere di posizione pari; la 2° le lettere di posizione
dispari;
5) Verifichi se contiene doppie.

Inserita una 2° stringa determinare:
1) Quale delle 2 è più lunga e più corta;
2) Quale delle 2 stringhe contiene più vocali;
3) Quale delle 2 stringhe contiene più consonanti;
4) Quali sono le lettere contenute in ambedue le stringhe;
*/
char vocali[] = {'a', 'e', 'o', 'i', 'u', 'A', 'E', 'O', 'I', 'U'};
int numeroVocali = 0, numeroConsonanti = 0,numeroVocali2 = 0, numeroConsonanti2 = 0;
char stringaInserita[100],copiaStringa[100],stringaInserita2[100];
char entrambe[100];
char letterePosPari[100],letterePosDispari[100];
int controlloLettere,controlloLettere2;
char inserimentoLettera;
int contatore=0;
bool Controllo=false,Controllo2=false;
//insrimento della stringa
printf("inserisci una stringa\n");
scanf("%s",&stringaInserita);
int lunghezzaStringa=strlen(stringaInserita);

do{
    controlloLettere=controllolettere(stringaInserita,lunghezzaStringa);
   if (controlloLettere==1)
   {
    printf("Non hai inserito solo caratteri nella stringa, reinseriscila\n");
    scanf("%s",&stringaInserita);
   }
}while (controlloLettere!=0);

numeroVocali = controllo(stringaInserita,lunghezzaStringa,vocali);
numeroConsonanti=lunghezzaStringa-numeroVocali;
printf("Il numero delle vocali che contiene la stringa che hai inserito è di: %d\n",numeroVocali);
printf("Il numero delle consonanti che contiene la stringa che hai inserito è di: %d\n",numeroConsonanti);

printf("Inserici una lettera per controllare se c'è nella stringa\n");
scanf("%s",&inserimentoLettera);
for (int i = 0; i < lunghezzaStringa && !Controllo; i++)
{
    if (stringaInserita[i]==inserimentoLettera)
    {
        printf("La lettera è presente nella stringa precedentemente inserita\n");
        Controllo=true;
    }
}
if (!Controllo)
{
    printf("La lettera non è presente nella stringa\n");
}

//inserimento delle celle che hanno posizione pari
for (int i = 0, k = 0; i < lunghezzaStringa; i++) {
        if (i % 2 == 0) {
            letterePosPari[k++] = stringaInserita[i];
        }
    }

//inserimento delle celle che hanno posizione dispari
for (int i = 0, k = 0; i < lunghezzaStringa; i++) {
        if (i % 2 != 0) {
            letterePosDispari[k++] = stringaInserita[i];
        }
    }


printf("Le lettere in posizione dispari sono: %s\n",letterePosDispari);
printf("Le lettere in posizione pari sono: %s\n",letterePosPari);

strcpy(copiaStringa,stringaInserita);
for (int i = 0; i < lunghezzaStringa; i++)
{
   for (int k = 0; k < lunghezzaStringa && !Controllo2; i++)
   {
    if (stringaInserita[i]==copiaStringa[k])
    {
        printf("La stringa contiene dei caratteri che sono doppi\n");
        Controllo2=true;
    }
   }
}


printf("inserisci una stringa\n");
scanf("%s",&stringaInserita2);
int lunghezzaStringa2=strlen(stringaInserita2);

do{
    controlloLettere2=controllolettere(stringaInserita2,lunghezzaStringa2);
   if (controlloLettere2==1)
   {
    printf("Non hai inserito solo caratteri nella stringa, reinseriscila\n");
    scanf("%s",&stringaInserita2);
   }
}while (controlloLettere2!=0);

if (strcmp(stringaInserita2,stringaInserita)<0)
{
    printf("La prima stringa ha più caratteri della seconda\n");
}else{
    printf("La seconda stringa ha più caratteri della prima\n");
}

numeroVocali2 = controllo(stringaInserita2,lunghezzaStringa2,vocali);
numeroConsonanti2=lunghezzaStringa2-numeroVocali2;
if (numeroVocali2>numeroVocali)
{
    printf("La seconda stringa ha più consonanti\n");
}else{
    printf("La prima stringa ha più consonanti\n");
}

if (numeroConsonanti2>numeroConsonanti)
{
    printf("La seconda stringa ha più consonanti\n");
}else{
    printf("La prima stringa ha più consonanti\n");
}

//i valori contenuti in entrambe le stringhe
for (int i = 0; i < lunghezzaStringa; i++)
{
    for (int k = 0; k < lunghezzaStringa2; k++)
    {
        if (stringaInserita2[k]==stringaInserita[i])
        {
            entrambe[contatore]=stringaInserita2[k];
            contatore++;
        }
        
    }
    
}
printf("Le lettere doppie sono: %s\n",entrambe);


}