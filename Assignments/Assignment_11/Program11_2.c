///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplayEven
//  Description   : Used to accept number from user and display all even numbers in between that range
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 25 /10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
  int iCnt = 0;
  
  if(iStart > iEnd)
  {
      printf("Invalid Range");
  }

  for(iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
      if((iCnt % 2)==0)
      {
        printf("%d\t",iCnt);
      }
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

    RangeDisplayEven(iValue1,iValue2); 
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 25  40
//  output : 26      28      30      32      34      36      38      40
//             
//  Input  : 100  18
//  output : Invalid Range  
//
//  Input  : -10   2
//  output : -10     -8      -6      -4      -2      0       2              
///////////////////////////////////////////////////////////////////////////////////////////
