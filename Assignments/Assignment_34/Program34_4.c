
////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial
//  Description   : Accept character from user and check whether it is special or not.
//  Input         : Character
//  Output        : Character
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 2/12/2025
//
////////////////////////////////////////////////////////////////////////////////

bool ChkSpecial(char ch)
{
    if (ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
        ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return true;
    }
    else
    {
        return false;
    }
} // End of function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = 0;

    printf("Enter the Character : ");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == true)
    {
        printf("It is Special Character");
    }
    else
    {
        printf("It is not a Special Character");
    }

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Enter the Character : #
//  Ouptput : It is Special Character
//
//  Input   : Enter the Character : w
//  Ouptput : It is not a Special Character
//
//
////////////////////////////////////////////////////////////////////////////////
