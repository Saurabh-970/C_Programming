
////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description   : Accept String from user & check whether it cintain vowel or not.
//  Input         : Character
//  Output        : character
//  Author        : Saurabh Ravindra Bhonsle 
//  Date          : 29/11/2025
//
////////////////////////////////////////////////////////////////////////////////

#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
        if (*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ||
            *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;

} // End of function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter the String :\n");
    scanf("%[^'\n]s", Arr);

    bRet = ChkVowel(Arr);

    if (bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : marvellous
//  Ouptput : Contains Vowel
//
//  Input   : Demo
//  Ouptput : Contains Vowel
//
//  Input   : xyz
//  Ouptput : There is no Vowel
//
////////////////////////////////////////////////////////////////////////////////
