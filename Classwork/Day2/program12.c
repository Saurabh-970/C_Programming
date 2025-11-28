/*
    START
        Accept numbe4 and store as no
        Divide no by 2
        If the reminder is zero then display as Even 
        otherwise Odd
    STOP
*/


#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;
    
    iRem =iNo % 2;
    if(iRem == 0)
    {
        printf("It is Even number :\n");
    }
    else
    {
        printf("It is Odd number :\n");
    }
}
int main()
{   
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}