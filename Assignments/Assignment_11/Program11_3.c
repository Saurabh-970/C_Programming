///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : RangeSum
//  Description   : Used to accept number from user and return Addition between those two no
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 25 /10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
  int iCnt = 0;
  int iSum = 0;
  
  if(iStart > iEnd || iStart < 0 || iEnd < 0)
  {
      printf("Invalid Range \n");
      return 0;
  }

  for(iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
    iSum = iSum + iCnt;
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
    int iRet = 0;
  
    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending  point :");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2); 
    printf("Addition is %d", iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : Enter starting point :23
//  Input2 : Enter ending  point :30
//  Output : Addition is 212
//           
//  Input  : 100  18
//  output : Invalid Range  
//
//  Input1 : Enter starting point :-10
//  Input2 : Enter ending  point :5
//  output : Invalid RangeAddition is 0
//                       
///////////////////////////////////////////////////////////////////////////////////////////
