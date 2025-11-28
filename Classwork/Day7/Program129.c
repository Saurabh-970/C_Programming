#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{   
    
    int iCnt = 0, iEven = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)    
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }
        
    }
    return iEven;
}

int main()
{
   int iLength = 0, iCnt = 0, iRet = 0;
   int *ptr = NULL;
   
   printf("Enter number elements");
   scanf("%d",&iLength);
   
   ptr = (int*)malloc(iLength * sizeof(int));
   if(NULL == ptr) // Industrial way of coding.
   {
    printf("Unbale to allocate memory");
    return -1;
   }

   printf("Enter the elements :\n");
   
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        scanf("%d",&ptr[iCnt]);
   }

   iRet = CountEven(ptr,iLength);
   printf("Addition is : %d\n",iRet);


   free(ptr);
    
    return 0;
}