///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplaySchedule
//  Description   : 
//  Input         : Character
//  Output        : Character
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 28 /11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
  char ch = chDiv;

  if(ch >= 'a' && ch <= 'd')
  {
    ch = ch -32;
  }

  switch(ch)
  {
    case 'A':
      printf("Your exame is at 7Am :");
      break;

    case 'B':
      printf("Your exame is at 8:30Am :");
      break;

    case 'C':
      printf("Your exame is at 9:20Am :");
      break;

    case 'D':
      printf("Your exame is at 10:30Am :");
      break;

    default:
      printf("Invalid Divison");


  }
  
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
  char cVAlue ='\0';

  printf("Enter your divison :");
  scanf("%c",&cVAlue);

  DisplaySchedule(cVAlue);

  return 0;

}//End of main

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input  : 11
//  Output : It is a Digit
//
//  Input  : a
//  Output : It is not a Digit                        
///////////////////////////////////////////////////////////////////////////////////////////