#include<stdio.h>
#include<stdlib.h>
int main()
{
    int unit;
    float add,amount;
    printf("enter electricity unit to calculate electricity bill");
    scanf("%d",&unit);
    switch(unit<=50)
    {
    case 1:
        amount=unit*0.50;
        break;
    case 0:
        switch(unit<=150)
        {
        case 1:
            amount=25+unit-50*0.75;
            break;
        case 0:
            switch(unit<=250)
            {
            case 1:
                amount=25+75+(unit-150)*1.20;
                break;
            case 0:
                amount=25+75+120+(unit-250)*1.50;
                break;
            }
        }
    }
    printf("\n");
    add=amount*20/100;
    amount=amount+add;
    printf("%f",amount);

}
