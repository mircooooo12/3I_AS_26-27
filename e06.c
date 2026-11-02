#include <stdio.h>
int main()
{
    int val1=0;
    int val2=0;
    int tmp=0;

    printf("inserisci val1");
    scanf("%d",&val1);  

    printf("inserisci val2");
    scanf("%d",&val2);  

    tmp = val1;
    val1 = val2;
    val2 = tmp;

    printf("Valori: %d,%d\n", val1,val2);

}
