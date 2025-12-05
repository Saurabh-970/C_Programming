
////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept character from user. IF character is small display all
//                  character from the input character till Z. in same small reverse order.
//  Input         : Character
//  Output        : Character
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 2/12/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        for (char c = ch; c <= 'Z'; c++)
        {
            printf("%c\t", c);
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (char c = ch; c >= 'a'; c--)
        {
            printf("%c\t", c);
        }
    }
    else
    {
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

    printf("Enter the Characte : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : Q
//  Output : Q  R   S   T   U   V   W   X   Y   Z
//
//  Input  : m
//  Output : m  l   k   j   i   h   g   f   e   d   c   b   a
//
//  Input  : 8
//  Output :
//
//
////////////////////////////////////////////////////////////////////////////////
