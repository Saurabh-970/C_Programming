///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplay
//  Description   : Used to accept number from user and display all numbers in between that range
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 25 /10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
  int iCnt = 0;
  
  if(iStart > iEnd)
  {
      printf("Invalid Range");
  }

  for(iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
      printf("%d\t", iCnt);
  }
}
 

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
  
    printf("Enter starting point :");
    scanf("%d",&iValue1);

     printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2); 
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 75  89
//  output : 75      76      77      78      79      80      81      82      83      84      85      86      87      88      89
//             
//  Input  : 100  18
//  output : Invalid Range  
//
//  Input  : -10   2
//  output : -10     -9      -8      -7      -6      -5      -4      -3      -2      -1      0       1       2              
///////////////////////////////////////////////////////////////////////////////////////////
