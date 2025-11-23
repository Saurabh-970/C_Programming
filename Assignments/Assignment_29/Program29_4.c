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
//  Output        : Alphabet and integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 20 /11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////


void Pattern(int iRow, int iCol)
{
  int i = 0;
  int j = 0;
  int iNo = 0;

  for(i = 1; i <= iRow; i++)
  {
        if(i %2 == 1)
        {
          iNo = 1;
        }
        else
        {
          iNo = -1;
        }
  
    for(j = 1; j <= iCol; j++)
    { 
       printf("%d\t",iNo);
        if(iNo > 0)
        {
          iNo++;
        }
        else
        {
          iNo--;
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
//    Output :  1   2   3   4  5
//             -1  -2  -3  -4 -5
//              1   2   3   4  5
//             -1  -2  -3  -4 -5
//              1   2   3   4  5
//              
//                          
///////////////////////////////////////////////////////////////////////////////////////////