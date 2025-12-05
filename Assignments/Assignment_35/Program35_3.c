
////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description   : Accept String from user and return Small & capital diffrence.
//  Input         : Character
//  Output        : Input
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 2/12/2025
//
////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCount1 = 0;
    int iCount2 = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCount1++;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            iCount2++;
        }
        str++;
    }
    return (iCount1 - iCount2);

} // End of function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n]s", Arr);

    iRet = CountCapital(Arr);

    printf("%d", iRet);

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : MarvellouS
//  Ouptput : 6 (8 - 2)
//
//
////////////////////////////////////////////////////////////////////////////////
