//////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//  
//  Function Name : Display
//  Description   : Accept number from user and display first no in second
//  Input         : Integer
//  Output        : Integer
//  Author name   : Saurabh Ravindra Bhonsle.
//  Date          : 20/10/2025
//
////////////////////////////////////////////////////////////////////////// 

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;
    // Updator
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt =0; iCnt<iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}


//////////////////////////////////////////////////////////////////////////
//
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0 , iValue2 = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue1);

    printf("Enter number :");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}
//////////////////////////////////////////////////////////////////////////
//
//   Testcases successfully handles by the application
//   
//   Input  :  12 | 5
//   Output :  12 12 12 12 12 
//
//   Input  : -2  | 3
//   Output :  2 2 2 
//
//////////////////////////////////////////////////////////////////////////