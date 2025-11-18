///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Maximum
//  Description   : Accept N no from user and return largest
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 15 /11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax =Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }  
    }   
    return iMax;
   
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{   
    int iSize = 0, iCnt = 0;
    int iRet = 0;
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

    iRet = Maximum(iPtr,iSize);

    printf("Largest number is %d",iRet);
    
    free(iPtr);
    return 0;
}
//End of main function

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//    Enter number of elements : 80 55 74 45 96 95
//                                              
//    Output :  Largest number is 96
//                          
//                          
//                          
//                          
//                          
//    
//                   
///////////////////////////////////////////////////////////////////////////////////////////