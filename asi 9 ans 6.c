#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x=1,year;
    while(1)
    {
    switch(x)
    {
    case 1:
        printf("enter a year");
        scanf("%d",&year);
        switch(year%4==0)
        {
        case 0==0:
            x++;
            break;
        default:
            printf("not a leap year");
            exit(0);
        }
        break;
    case 2:
        switch(year%100==0)
        {
        case 0==0:
            x++;
            break;
        default:
            printf("leap year");
            exit(0);
        }
        break;
    case 3:
        switch(year%400==0)
        {
        case 0==0:
            printf("leap year");
            x++;
            break;
        default:
            printf("not a leap year");
            exit(0);
        }
        break;
    case 4:
        exit(0);

    }
    printf("\n");
}
return 0;
}
