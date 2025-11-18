///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FrequencyOcc
//  Description   : Aceept no from user and aceept another no and return Array index of that number 
//  Input         : Integer
//  Output        : Statement checked
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 15 /11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

int FrequencyOcc(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    int  iIndex = -1; 
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
            iIndex = iCnt;
            break;
        }
       
    }
    return iIndex;
    
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{   
    int iSize = 0, iRet = 0, iCnt = 0;
    int iValue = 0;
    int *iPtr =NULL;

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

    printf("Enter the number to Search Index :\n");
    scanf("%d",&iValue);

    iRet = FrequencyOcc(iPtr,iSize,iValue);
    
    if(iRet == -1)
    {
        printf("There is no such number %d",iRet);
    }
    else
    {
        printf("First occurrence of number is %d",iRet);
    }
    
    free(iPtr);
    return 0;
}
//End of main function


///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10 20 30 40 50
//  Enter the number to Search Index : 10
//
//  Ouput : First occurrence of number is 0  
//                   
///////////////////////////////////////////////////////////////////////////////////////////