///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountEven
//  Description   : Used to Aceept no from user and check whether that number contains or not
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 15 /11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0 , iCount = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
            return true;
        }
       
    }
    return 0;
    
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{   
    int iSize = 0, iRet = 0, iCnt = 0;
    int *iPtr =NULL;
    bool bRet = false;
    int iValue =0;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    iPtr =(int*)malloc(iSize * sizeof(int));
    
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory:");
        return -1;
    }
     printf("Enter the elements :\n");

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the number to Search :\n");
    scanf("%d",&iValue);

    bRet = Check(iPtr,iSize,iValue);
    
    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    free(iPtr);
    return 0;
}
//End of main function

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 5 2 4 8 3
//  Output : 2 is present. 
//                       
///////////////////////////////////////////////////////////////////////////////////////////