
#include<stdio.h>
int main()
{
    int iNo = 723614;
    int iDigit = 0;


    printf("__________________________\n");
    printf("Original value of %d\n",iNo);

    printf("__________________________\n");
    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is :%d\n",iNo);

    printf("__________________________\n");  
    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is :%d\n",iNo);

    printf("__________________________\n");
    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is :%d\n",iNo);

    printf("__________________________\n");
    iDigit = iNo % 10;
     printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is :%d\n",iNo);
    printf("__________________________\n");
    

    return 0;
}