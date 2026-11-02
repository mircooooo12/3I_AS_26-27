#include <stdio.h>
int main()
{
    int v1,v2;
    int tmp;
    char junk;

    
    printf("inserisci v1: ");
    scanf("%d", &v1);
    junk = getchar();

    printf("inserisci v2: ");
    scanf("%d", &v2);
    junk = getchar();

    if(v1>v2)
    {
        tmp = v1;
        v1 = v2;
        v2 = tmp;
    }
    printf("v1 = %d\n", v1);
    printf("v2 = %d\n", v2);

    return 0;
}
