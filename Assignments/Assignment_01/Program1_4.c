//////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////
//  
//  Function Name : Check
//  Description   : Accept number and check  divisible or not
//  Input         : Integer
//  Output        : Integer
//  Author name   : Saurabh Ravindra Bhonsle.
//  Date          : 20/10/2025
//
////////////////////////////////////////////////////////////////////////// 

bool Check(int iNo)
{
    if((iNo % 5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////
//
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divsible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}