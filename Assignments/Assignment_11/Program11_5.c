///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplayRev
//  Description   : Used to display numbers between 2 numbers in reverse
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 25 /10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

int RangeDisplayRev(int iStart, int iEnd)
{
  int iCnt = 0;
  int iSum = 0;
  
  if(iStart > iEnd )
  {
      printf("Invalid Range \n");
      
  }

  for(iCnt = iEnd; iCnt >= iStart; iCnt--)
  {
    printf(" %d ",iCnt);
  }

  return iSum;
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

    printf("Enter ending  point :");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2); 
   
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : Enter starting point :23
//  Input2 : Enter ending  point : 35
//  Output :  35  34  33  32  31  30  29  28  27  26  25  24  23
//           
//  Input  : 10  18
//  output : 18  17  16  15  14  13  12  11  10
//
//  Input1 : Enter starting point :-10
//  Input2 : Enter ending  point :5
//  output :  5  4  3  2  1  0  -1  -2  -3  -4  -5  -6  -7  -8  -9  -10
//                       
///////////////////////////////////////////////////////////////////////////////////////////
