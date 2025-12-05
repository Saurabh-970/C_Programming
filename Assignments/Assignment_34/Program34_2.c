
////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept character from user. If character is small display its
//                  corresponding capital character and in other case display as its.
//  Input         : Character
//  Output        : Character
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 28/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf("%c\n", ch);
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
        printf("%c\n", ch);
    }
    else
    {
        printf("%c\n", ch);
    }

}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the Characte : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
} 

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : Q
//  Output : q
//
//  Input  : m
//  Output : M
//
//  Input  : 4
//  Output : 4
//
//  Input  : %
//  Output : %
//
////////////////////////////////////////////////////////////////////////////////
