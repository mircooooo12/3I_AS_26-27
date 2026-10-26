#include<stdio.h>
int main()
{
    float a = 0 ;
    float b = 0 ;
    float avg = 0 ;
    printf("inserisci il primo voto: ") ;
    scanf("%f", &a) ;
    printf("inserisci il secondo voto: ") ;
    scanf("%f", &b) ;
    avg = (float)(a + b)/2.0 ;
    printf("la media è: %f", avg) ;
}