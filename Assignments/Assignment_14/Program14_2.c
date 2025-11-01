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
//  Function name : CheckZero
//  Description   : Used to accept number from user and display no contains zero or not
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 25 /10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckZero(int iNo)
{
   int iDigit = 0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }
   if(iNo == 0)
   {
      return TRUE;
   }
   while(iNo != 0)
   {
      iDigit = iNo % 10;
      if(iDigit == 0)
      {
         return TRUE;
      }
         iNo = iNo / 10;
      
         
   }
      return FALSE;


}
 

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
  
    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);
    
    if(bRet == TRUE)
    {
      printf("It Contains zero");
    }
    else
    {
      printf("There is no zero");
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 2546
//  output : There is no zero
//             
//  Input  :  2014
//  output :  It contains Zero       
//             
///////////////////////////////////////////////////////////////////////////////////////////
