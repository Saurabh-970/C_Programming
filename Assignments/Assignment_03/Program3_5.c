//////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////
//  
//  Function Name : CheckVowel
//  Description   : Accept one character from user and checks its Vowel
//  Input         : Character
//  Output        : Character /BOOLEAN(TRUE/FALSE)
//  Author name   : Saurabh Ravindra Bhonsle.
//  Date          : 20/10/2025
//
////////////////////////////////////////////////////////////////////////// 

typedef int BOOL;
#define TRUE  1
#define FALSE 0

BOOL CheckVowel(char cValue)
{
    if(cValue=='A' || cValue=='E' || cValue=='I' || cValue=='O' || cValue=='U' ||

       cValue=='a' || cValue=='e' || cValue=='i' || cValue=='o' || cValue=='u')
    
    {
        return TRUE;
    }   
    else
    {
        return FALSE;
    }

}////////////////////////End of CheckVowel function///////////////////////

//////////////////////////////////////////////////////////////////////////
//
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character :\n");
    scanf("%c",&cValue);

    bRet =CheckVowel(cValue);
    
    if(bRet == TRUE)
    {
        printf("TRUE \n");
    }
    else
    {
        printf("FALSE \n");
    }

    return 0;
}////////////////////////End of main fucntion/////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
//   Testcases successfully handled by the application
//   
//   Input  :  A
//   Output :  TRUE
//
//   Input  :  Z
//   Output :  FALSE
//
//////////////////////////////////////////////////////////////////////////