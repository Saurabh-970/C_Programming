#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Input : 6    output : 
    for(iCnt = 2; iCnt<= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            
            break;          // optimization
        }
    }

    if(iCnt > (iNo/2))     // No factors
    {
        return true ;
    }
    else                    // Atleast onr factor
    {
        return false;
    }
     
   
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