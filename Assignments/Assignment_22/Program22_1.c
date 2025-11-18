///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountEven
//  Description   : Used to Aceept no from user and return frequency of even no
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 15 /11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////


int CountEven(int Arr[], int iLength)
{
    int iCnt = 0 , iEven = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }
    }
    return iEven;
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

    iRet = CountEven(iPtr,iSize);
    printf("Result is %d",iRet);

    free(iPtr);
    return 0;
}
//End of main function


///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 5 2 4 8 3
//  Output : Even numbers are 3. 
//                       
///////////////////////////////////////////////////////////////////////////////////////////