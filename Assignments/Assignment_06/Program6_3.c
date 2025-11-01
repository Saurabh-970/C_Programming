////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description   : Accept number from user & check number is equal or not
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 21/10/2025
//
////////////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    bool bRet = false;

    printf("Plese two number : ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if (bRet)
    {
        printf("Equal %d %d",iValue1, iValue2);
    }
    else
    {
        printf("Not Equal %d %d",iValue1, iValue2);
    }

    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 25 25
//  Output : Equal 25 25
//
//  Input  : 95 100
//  Output : Not Equal
//
////////////////////////////////////////////////////////////////////////////////
