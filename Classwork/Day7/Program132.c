#include<stdio.h>
#include<stdlib.h>

float CountAvg(int Arr[], int iSize)
{   
    
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)    
    {
        iSum = iSum + Arr[iCnt];
        
    }
    return ((float)iSum /(float) iSize); 
}

int main()
{
   int iLength = 0, iCnt = 0;
   float fRet = 0;
   int *ptr = NULL;
   
   printf("Enter number elements :");
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

   fRet = CountAvg(ptr,iLength);
   printf("Average  is : %f\n",fRet);


   free(ptr);
    
    return 0;
}