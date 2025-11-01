//////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//  
//  Function Name : DisplayFactor
//  Description   : Accept one character from user and convert case of that character
//  Input         : Character
//  Output        : Character
//  Author name   : Saurabh Ravindra Bhonsle.
//  Date          : 20/10/2025
//
////////////////////////////////////////////////////////////////////////// 

void DisplayConvert(char cValue)
{
    

    if(cValue >= 'A'&& cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf("Convert character : %c",cValue);
    }
    else if(cValue >= 'a'&& cValue <= 'z')
     {
        cValue = cValue - 32;
        printf("Convert character : %c",cValue);
    }
}


//////////////////////////////////////////////////////////////////////////
//
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';

    printf("Enter Character :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}
//////////////////////////////////////////////////////////////////////////
//
//   Testcases successfully handled by the application
//   
//   Input  :  A
//   Output :  a
//
//   Input  :  d
//   Output :  D
//
//////////////////////////////////////////////////////////////////////////