#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while(1)
{
    printf(" Choose which calculation you want to do between two no.s ");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("enter two no.s you want to add");
        scanf("%d %d",&a,&b);
        printf("sum is %d",a+b);
        break;
    case 2:
        printf("enter two no.s you want to subtract");
        scanf("%d %d",&a,&b);
        printf("subtraction is %d",a-b);
        break;
    case 3:
         printf("enter two no.s you want to multiply");
        scanf("%d %d",&a,&b);
        printf("multiplication is %d",a*b);
        break;
    case 4:
         printf("enter two no.s you want to divide");
        scanf("%d %d",&a,&b);
        printf("division is %d",a/b);
        break;
    case 5:
        exit(0);
    default:
        printf("invalid choice");
       }
printf("\n");
}
return 0;
}
