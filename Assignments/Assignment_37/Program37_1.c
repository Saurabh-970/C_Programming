///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : ChkChar
//  Description   : Accept string and accept one character and check whether it is present or not
//  Input         : String
//  Output        : String
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 2 /12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
  while(*str != '\0')
  {
    if (*str == ch)
    { 

      return TRUE;
      break;
    }
    else
    {
      return FALSE;
    }
    str++;
  }

}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
 char arr[20];
 char cVAlue;
 BOOL bRet = FALSE;

  printf("Enter the string :");
  scanf("%[^'\n]s",arr);

  printf("Enter the character\n");
  scanf(" %c",&cVAlue);

  bRet = ChkChar(arr,cVAlue);

  if(bRet == TRUE)
  {
    printf("Character found :\n");
  }
  else
  {
    printf("Character not found :\n");
  }

  return 0;

}//End of main

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  Input : "Marvellous Multi os"
//  Input2 : e
//  Output  : TRUE
                      
///////////////////////////////////////////////////////////////////////////////////////////