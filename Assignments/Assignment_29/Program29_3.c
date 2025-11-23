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
  char ch = 'a';

  for(i = 1; i <= iRow; i++)
  {
      if(i % 2 == 1 )
      {
        ch = 'a';
      }
    for(j = 1; j <= iCol; j++)
    { 
        if(i %2 != 1)
        {
          printf("%d\t",j);
          
        }
        else
        {
          printf("%c\t",ch);
          ch++;
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
//    Output :  a   b   c   d  e  
//              1   2   3   4  5
//              a   b   c   d  e
//              1   3   5   7  9
//              a   b   c   d  e
//              
//                          
///////////////////////////////////////////////////////////////////////////////////////////