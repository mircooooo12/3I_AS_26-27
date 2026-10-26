/* creare un pogramma che richiede in input due lati di una figura;
    se i lati sono uguali calcolare il perimetro della figura; se i lati sono divesi
    calcolare l'area della figura. Ovviamente il valore calcolato.
    (ipotizzando qudrato o rettangolo).
*/ 

#include<stdio.h>
int main()
{
    float lato1 = 0;
    float lato2 = 0;
    float area = 0;
    float perimetro = 0;

    printf("il primo lato è: ");
    scanf("%f",&lato1);

    printf("il secondo lato è: ");
    scanf("%f",&lato2);

    area = lato1*lato2;
    perimetro = 4*lato1;
    if(lato1=lato2)
        {
            printf("il perimtro del quadrato è:%f",perimetro);
        }
    else
        {
            printf("l'area è:%f",area);
        }
}
