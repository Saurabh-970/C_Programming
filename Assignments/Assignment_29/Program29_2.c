///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Description   : Accept number of rows and columns and display the pattern
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 20 /11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////


void Pattern(int iRow, int iCol)
{
  int i = 0;
  int j = 0;

  for(i = 1; i <= iRow; i++)
  {
    for(j = 1; j <= iCol; j++)
    { 
      if(i % 2 == 1)
      {
        printf("%d\t",j * 2);
      }
      else
      {
        printf("%d\t",(j * 2) - 1);
      
      } 
    }
    printf("\n");

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
    printf("Enter number of rows and columns :");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return 0;

}//End of main

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//    Enter number of rows and columns   : rows :4, columns: 5
//                                              
//    Output :  2   4   6   8  10   
//              1   3   5   7  9
//              2   4   6   8  10
//              1   3   5   7  9
//              
//              
//                          
///////////////////////////////////////////////////////////////////////////////////////////