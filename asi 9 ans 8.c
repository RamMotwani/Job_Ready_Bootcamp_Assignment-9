#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int x,i;
    while(1)
    {
    printf("1.To change positive no. into negative");
    printf("\n2.To change negative no. into posotive");
    printf("\n3.Exit\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("enter a positive no.\n");
        scanf("%d",&i);
        printf("%d",i-i*2);
        break;
    case 2:
        printf("enter a negative no.\n");
        scanf("%d",&i);
        printf("%d",i-i*2);
        break;
    case 3:
        exit(0);
    default:
        printf("invalid choice");
        }
        printf("\n");
    }
    return 0;
}
