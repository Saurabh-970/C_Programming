///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description   : Accept single digit from user and print it into words
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 25 /10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }
 switch(iNo)
 {
    case 0:
        printf("Zero");
      break;

      case 1:
       printf("One");
      break;

      case 2:
         printf("Two");
      break;

      case 3:
        printf("Three");
      break;

      case 4:
        printf("Four");
      break;

      case 5:
        printf("Five");
      break;

      case 6:
        printf("Six");
      break;

      case 7:
        printf("Seven");
      break;

      case 8:
        printf("Eight");
      break;

      case 9:
        printf("Nine");
      break;

      default:
        printf("invalid number");

 }
   
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);
   
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 4
//  output : Four
//
//  Input  : -1
//  output : one
//
//  Input  : 12
//  output : Invalid number.
//
///////////////////////////////////////////////////////////////////////////////////////////
