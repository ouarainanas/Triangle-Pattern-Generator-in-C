#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,j,c,k;
    printf("choose a triangle type:\n");
    printf("1. isosceles (pointing up)\n");
    printf("2. isosceles inverted (pointing down)\n");
    printf("3. right-aligned left\n");
    printf("4. right-aligned left inverted\n");
    printf("5. right-aligned right\n");
    printf("6. right-aligned right inverted\n");
    printf("7. isosceles hollow\n");
    printf("8. diamond\n");
    printf("choice: ");
    scanf("%d",&c);
    printf("enter the number of lines\n");
    printf("lines: ");
    scanf("%d",&k);
    if(c==1){
        for(i=1;i<=k;i++){
            for(j=1;j<=k-i;j++) printf(" ");
            for(j=1;j<=2*i-1;j++) printf("*");
            printf("\n");
        }
    }
    else if(c==2){
        for(i=k;i>=1;i--){
            for(j=1;j<=k-i;j++) printf(" ");
            for(j=1;j<=2*i-1;j++) printf("*");
            printf("\n");
        }
    }
    else if(c==3){
        for(i=1;i<=k;i++){
            for(j=1;j<=i;j++) printf("*");
            printf("\n");
        }
    }
    else if(c==4){
        for(i=k;i>=1;i--){
            for(j=1;j<=i;j++) printf("*");
            printf("\n");
        }
    }
    else if(c==5){
        for(i=1;i<=k;i++){
            for(j=1;j<=k-i;j++) printf(" ");
            for(j=1;j<=i;j++) printf("*");
            printf("\n");
        }
    }
    else if(c==6){
        for(i=k;i>=1;i--){
            for(j=1;j<=k-i;j++) printf(" ");
            for(j=1;j<=i;j++) printf("*");
            printf("\n");
        }
    }
    else if(c==7){
        for(i=1;i<=k;i++){
            for(j=1;j<=k-i;j++) printf(" ");
            for(j=1;j<=2*i-1;j++){
                if(j==1||j==2*i-1||i==k) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
    }
    else if(c==8){
        for(i=1;i<=k;i++){
            for(j=1;j<=k-i;j++) printf(" ");
            for(j=1;j<=2*i-1;j++) printf("*");
            printf("\n");
        }
        for(i=k-1;i>=1;i--){
            for(j=1;j<=k-i;j++) printf(" ");
            for(j=1;j<=2*i-1;j++) printf("*");
            printf("\n");
        }
    }
    else{
        printf("invalid choice");
    }
    return 0;
}
