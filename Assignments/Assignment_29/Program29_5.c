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
//  Output        : integer
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
    iNo = i;
    
    for(j = 1; j <= iCol; j++)
    { 
       printf("%d\t",iNo);
       iNo++;

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
//    Enter number of rows and columns   : rows :5, columns: 5
//    Output : 1       2       3       4       5
//             2       3       4       5       6
//             3       4       5       6       7
//             4       5       6       7       8
//             5       6       7       8       9                                          
//              
//                          
///////////////////////////////////////////////////////////////////////////////////////////