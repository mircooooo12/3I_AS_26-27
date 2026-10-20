/*
  Data: 20.10.2026
  Author: Michielon Mirco
  Description: Semplice programma che somma due valori in input.
*/
#include <stdio.h>

int main()
{   
    // dichiariazione deòlle variabili al nostro algoritmo.
    int a;
    int b;
    int c;  
    char junk;
    // junk è usata per bpulire il buffer nelle fasi di input. 

    // inizializzazione delle variabili.

    a = 0;
    b = 0;
    c = 0;

    //fase di input dei valori A e B.
    printf("Inserisci il valore A");
    scanf("%d", &a);
    junk = getchar();

    printf("Inserisci il valore B");
    scanf("%d", &b);
    junk = getchar();

    // calcolo in C la somma dei valori A e B
    c = a + b;

    // comunico il valore della somma
    printf("La somma vale: %d", c);

    return 0;
}