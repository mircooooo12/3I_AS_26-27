// acquisire 4 valori da input stampare a video e calcolare la somma solo dei valori compresi tra 10 e 20 inclusi

#include <stdio.h>
int main()
{
    int v1=0;
    int v2=0;
    int v3=0;
    int v4=0;
    int somma=0;
    char junk;

    printf("valore 1 è: ");
    scanf("%d",&v1);
    junk=getchar();

    printf("valore 2 è: ");
    scanf("%d",&v2);
    junk=getchar();

    printf("valore 3 è: ");
    scanf("%d",&v3);
    junk=getchar();

    printf("valore 4 è: ");
    scanf("%d",&v4);
    junk=getchar();

    if((v1>=10) && (v1<=20))
    {
        printf("valore v1: %d\n", v1);
        somma= somma + v1;
    }

        if((v2>=10) && (v2<=20))
    {
        printf("valore v2: %d\n", v2);
        somma= somma + v2;
    }

        if((v3>=10) && (v3<=20))
    {
        printf("valore v3: %d\n", v3);
        somma= somma + v3;
    }

        if((v4>=10) && (v4<=20))
    {
        printf("valore v4: %d\n", v4);
        somma= somma + v4;
    }

    printf("\n somma dei valori idonei: %d\n", somma);
    
    return 0;
}