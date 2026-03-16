#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,j,c,k;
    printf("entrer la valeur de lignes \n");
    printf("lignes:");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(j=1;j<=k-i;j++){
             printf(" ");
            }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
