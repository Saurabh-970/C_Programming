///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FindLargest
//  Description   : Used to check largest number amoung three number
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 21 /10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

int FindLargest(int iNum1 , int iNum2 , int iNum3)
{
  int largest = 0;

  if(iNum1 >= iNum2 && iNum1 >= iNum3)
  {
    return largest = iNum1;
  }
  else if(iNum2 >= iNum1 && iNum2 >= iNum3)
  {
    return largest = iNum2;
  }
  else
  {
    return largest = iNum3;
  }

  return largest;
  
    
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int iRet = 0;
    
    printf("Enter three number :");
    scanf("%d %d %d",&a, &b, &c);
    
    iRet =FindLargest(a, b ,c);
    printf(":Largest number is : %d",iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 20 30 50
//  output : 50 is largest number.
//
//  Input  : -52 55 88
//  Output :  88 is largest number.
//
//  Input  : 88 445 888
//  Output : 888 is largest number.
///////////////////////////////////////////////////////////////////////////////////////////
