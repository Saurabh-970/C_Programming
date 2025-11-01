//////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////
//  
//  Function Name : CheckEvenOdd
//  Description   : Accept number from user and check even or odd
//  Input         : Integer
//  Output        : Integer
//  Author name   : Saurabh Ravindra Bhonsle.
//  Date          : 20/10/2025
//
////////////////////////////////////////////////////////////////////////// 

bool Checkeven(int iNo)
{
    
    if((iNo % 2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    return iNo;
}

//////////////////////////////////////////////////////////////////////////
//
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 ;
    bool bRet = false;
    
    printf("Enter number :");
    scanf("%d",&iValue1);

    bRet =Checkeven(iValue1);

    if(bRet)
    {
        printf(" Your number is Even: %d",iValue1);
    }
    else
    {
        printf("Your number is Odd: %d",iValue1);
    }
    return 0;
}
//////////////////////////////////////////////////////////////////////////
//
//   Testcases successfully handles by the application
//   
//   Input  :  2
//   Output :  Even number
//
//   Input  :  3
//   Output :  Odd number 
//
//////////////////////////////////////////////////////////////////////////