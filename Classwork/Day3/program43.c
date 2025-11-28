// Input :12 2       Output :True
// Input :12 3       Output :flase
// Input :12 5       Output :flase
// Input :12 12      Output :True
// Input :12 7       Output :False
#include<stdio.h>

int main()
{   
    
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter first number :\n");
    scanf("%d",&iValue2);

    if((iValue1 % iValue2 )== 0)
    {
        printf("Its completely divisible \n");
    }
    else
    {
         printf("Its not divisible \n");
    }


    return 0;

}