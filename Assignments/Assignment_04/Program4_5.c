///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FactDiff.
//  Description   : Accept number from user and return  difference summation of all its non factors
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 21 /10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;

    //updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    iDiff = iSumFact - iSumNonFact;

    return iDiff;
    
  
    
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;
   

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);
   
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 12
//  output : 50
//
//  Input  : 13
//  Output : 77
//
//  Input  : 10
//  Output : 37
///////////////////////////////////////////////////////////////////////////////////////////
