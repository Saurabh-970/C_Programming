///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : RangeSumEven
//  Description   : Used to accept number from user and return Addition of even no between those two no
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 25 /10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
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
    if((iCnt % 2)==0)
    {
       iSum = iSum + iCnt;
    }
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

    iRet = RangeSumEven(iValue1,iValue2); 
    printf("Addition is %d", iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : Enter starting point :23
//  Input2 : Enter ending  point :30
//  Output : Addition of even number is : 108
//           
//  Input  : 10  18
//  output : 70 
//
//  Input1 : Enter starting point :-10
//  Input2 : Enter ending  point :5
//  output : Invalid Range :
//                       
///////////////////////////////////////////////////////////////////////////////////////////
