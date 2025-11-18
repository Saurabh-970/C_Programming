///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Frequency
//  Description   : Used to Aceept no from user and return frequency of even and odd no
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 15 /11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////


int Frequency(int Arr[], int iLength)
{
    int iCnt = 0 , iEven = 0;
    int Odd = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }
        else
        {
            Odd++;
        }
    }
    return iEven - Odd;
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

    iRet = Frequency(iPtr,iSize);
    printf("Result is %d",iRet);

    free(iPtr);
    return 0;
}
//End of main function


///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 85 66 3 80 93 88 90
//  Output : 1
//                       
///////////////////////////////////////////////////////////////////////////////////////////