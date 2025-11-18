///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Range
//  Description   : Accept N no from user and return product of all odd elements
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 15 /11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iPro = 1;
    int iOdd = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
           iPro = iPro * Arr[iCnt];
           iOdd = 1;
        }  
    }   
    if(iOdd == 0) 
    {
        return 0;
    }

    return iPro;
   
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

    iRet = Product(iPtr,iSize);

    printf("Product is %d",iRet);
    
    free(iPtr);
    return 0;
}
//End of main function

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//    Enter number of elements : 15 66 3 70 10 88
//                                              
//    Output :  
//                          
//                          
//                          
//                          
//                          
//    
//                   
///////////////////////////////////////////////////////////////////////////////////////////