//factors of six

#include<stdio.h>


void DsiplayFactors(int iNo)
{
    int iCnt = 0;
    

    if (iNo <0)
    {
        iNo = - iNo1;
    }
    for(iCnt =1 ; iCnt < iNo ; iCnt ++)
    {
        if((iNo % iCnt  )== 0)
     {
        printf("%d\n",iCnt);
     }
    }
    
    
}

//time complexity : O(N)

int main()
{   
    
    int iValue = 0;


    printf("Enter first number :\n");
    scanf("%d",&iValue);

    DsiplayFactors(iValue);


    return 0;

}