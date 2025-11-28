
//factors of six

#include<stdio.h>


void DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    

    if (iNo <0)
    {
        iNo =  -iNo;
    }
    for(iCnt =1 ; iCnt <= (iNo /2 ); iCnt ++)
    {
        if((iNo % iCnt  ) != 0)
     {
        printf("%d\n",iCnt);
     }
    }
    
    
}

//time complexity : O(N/2)

int main()
{   
    
    int iValue = 0;


    printf("Enter first number :\n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);


    return 0;

}