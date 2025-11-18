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
//  Description   : Accept N no from user and accept range and display all elements from that range
//  Input         : Integer
//  Output        : Integer
//  Author        : Saurabh Ravindra Bhonsle
//  Date          : 15 /11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength,int iNo1,int iNo2)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iNo1) &&(Arr[iCnt] <= iNo2))
        {
           printf("%d \t",Arr[iCnt]); 
        }  
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
    int iValue1 = 0;
    int iValue2 = 0;
    int *iPtr =NULL;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter the starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point :\n");
    scanf("%d",&iValue2);

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

    Range(iPtr,iSize,iValue1,iValue2);
    
    free(iPtr);
    return 0;
}
//End of main function


///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//    Enter number of elements : 60 85 17 93 56 84
//          
//    Enter the starting point : 60
//
//    Enter the ending point : 90
//                                     
//    Output :  60      85      84
//                          
//                          
//                          
//                          
//                          
//    
//                   
///////////////////////////////////////////////////////////////////////////////////////////