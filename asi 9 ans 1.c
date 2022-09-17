#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    while(1)
{
    printf("enter a month no. to find how many days in that month");
    printf("\n Enter 0 to exit");
    scanf("%d",&x);
        switch(x)
        {
        case 1:
            printf("31 days");
            break;
        case 2:
            printf("28 days");
            break;
        case 3:
            printf("31 days");
            break;
        case 4:
            printf("30 days");
            break;
        case 5:
            printf("31 days");
            break;
        case 6:
            printf("30 days");
            break;
        case 7:
            printf("31 days");
            break;
        case 8:
            printf("31 days");
            break;
        case 9:
            printf("30 days");
            break;
        case 10:
            printf("31 days");
            break;
        case 11:
            printf("30 days");
            break;
        case 12:
            printf("31 days");
            break;
        case 0:
            exit(0);
        default:
            printf("invalid month no.");
        }
        printf("\n");
}
return 0;

}
