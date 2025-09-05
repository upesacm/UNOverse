#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n%2;
    switch(s){
        case 0:
            printf("EVEN");
            break;
        case 1:
            printf("ODD");
            break;
        default:
            printf("invalid output");
    }
}