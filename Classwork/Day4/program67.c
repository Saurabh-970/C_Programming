//  iteration

#include<stdio.h>

void DisplayDigits(int iNo)
{
     int iDigit = 0;

    printf("__________________________\n");
    printf("Original value of %d\n",iNo);

    while(iNo != 0)
    {

            printf("__________________________\n");
            iDigit = iNo % 10;
            printf("iDigit is :%d\n",iDigit);
            iNo = iNo / 10;
            printf("iNo is :%d\n",iNo);

    }
    
    printf("__________________________\n");

}
int main()
{
    int iValue = 0;
   

    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
    


  
    

    return 0;
}