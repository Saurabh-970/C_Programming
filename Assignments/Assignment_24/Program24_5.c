///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DigitSum
//  Description   : Accept N no from user and display summation of digit of each number
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 15 /11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

void DigitSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0, iDigit = 0, iNo = 0;

    for(iCnt =0; iCnt < iLength; iCnt++)
    {
        iSum = Arr[iCnt];
        iDigit = 0;

        while(iSum != 0)
        {
            iNo = iSum % 10;
            iDigit = iDigit + iNo;
            iSum = iSum / 10;
        }

        printf(" %d  ",iDigit);
    }   
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{   
    int iSize = 0, iCnt = 0;
    int *iPtr =NULL;

    printf("Enter number of elements :\n");
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

    DigitSum(iPtr,iSize);

    free(iPtr);
    return 0;
}
//End of main function

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//    Enter number of elements : 8225 665 3 76 953 858
//                                              
//    Output : 17   17   3   13   17   21 
//                  
///////////////////////////////////////////////////////////////////////////////////////////