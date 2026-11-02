/*
    realizza un programma che richiede in input il giorno e il mese dell'anno
    es gg=10 mm=5
    il programma clacola e comunica:
    - quanti giorni sono passati dall'inizio dell'anno
    - quanti giorni mancano al Natale

    NB: Consideriamo che febbraio abbia 28 giorni; il numero di giorni e del mese deve essere corretto
    cioè non può essere gg=29 mm=2 oppure gg=31 mm=4

*/ 

#include <stdio.h>
int main()
{
    int gg=0;
    int mm=0;
    int giorni_passati=0;
    int giorni_mancanti=0;
    int natale=365-6;
    char junk; 

    printf("inserisci il giorno: ");
    scanf("%d",&gg);
    junk=getchar();

    printf("inserisci il mese: ");
    scanf("%d",&mm);    
    junk=getchar();

    if(mm==4)
    {
        gg!=31;
    }

    if(mm==6)
    {
        gg!=31;
    }

    if(mm==9)
    {
        gg!=31;
    }

    if(mm==11)
    {
        gg!=31;
    }
    if(mm=2)
    {
        gg!=31;
        gg!=30;
    }

giorni_passati=gg+(30*mm)-253;
giorni_mancanti=natale-(gg+30*mm);

printf("giorni mancanti a natale %d", giorni_mancanti);
printf("giorni passati dall'inizio della scuola %d", giorni_passati);
return 0;    
}         