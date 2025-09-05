#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=n%10;
    switch (a)
    {
    case 2 :
        printf("even");
        break;

    case 1 :
        printf("odd");
        break;

    case 3 :
        printf("odd");
        break;

    case 5 :
        printf("odd");
        break;

    case 7 :
        printf("odd");
        break;

    case 9 :
        printf("odd");
        break;

    case 4 :
        printf("even");
        break;

    case 6 :
        printf("even");
        break;
        
    case 8 :
        printf("even");
        break;

    case 0 :
        printf("even");
        break;

    default:
        break;
    }

    return 0;
}



