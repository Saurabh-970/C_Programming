#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    bFlag = true;
    
    for(iCnt = 2; iCnt<= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;           // optimization
        }
    }

    return bFlag;
     
   
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the numnber :\n");
    scanf("%d",&iValue);

    bRet =CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a prime value \n",iValue);
    }
    else
    {
        printf("%d is not prime value \n",iValue);
    }
    return 0;
}

/*
Time complexity  : for prime -N/2
Time comp-lexity : for non prime - either 1 or 2
*/