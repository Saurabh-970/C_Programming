/*
    Step 1: Understand the problem statement
    Step 2: Write the algorithm
    Step 3: Decide the programming language
    Step 4: Write the program
    Step 5: Test the program
*/

/*
    Algorithm

    Start
        Accept first number as no1
        Accept first number as no2
        If the input is negative then convert it into positive
        Perform Addition of no1 and no2
        Display the Addition on screen
    STOP
*/

///////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
///////////////////////////////////////////////////////////////////////////
//
//  Function name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Saurabh Ravindra Bhonsle
//  Date :          09/10/2025
///////////////////////////////////////////////////////////////////////////
float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0;

    //updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;     // Business logic
    return fSum;
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;


    printf("Enter First number:\n");
    scanf("%f",&fValue1);

    printf("Enter Second number:\n");
    scanf("%f",&fValue2);
    
    fRet = AdditionTwoNumbers(fValue1,fValue2);
    printf("Addition is :%f\n",fRet);

    return 0;
} 
///////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the appilication  
//
//  Input1 : 10.5     Input2 : 3.2       Output :13.7
//  Input1 : 10.5     Input2 : 3.2       Output :13.7
//  Input1 : 10.5     Input2 : 3.2       Output :13.7
//  Input1 : 10.5     Input2 : 3.2       Output :13.7
//  Input1 : 10.5     Input2 : 0.0       Output :10.5
///////////////////////////////////////////////////////////////////////////
