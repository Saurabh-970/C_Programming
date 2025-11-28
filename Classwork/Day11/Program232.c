/////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CountDigits(char  Str[])
{
    int iCount = 0;

    while(*Str != '\0')
    {    
        if((*Str >= 48 )&& (*Str <= 57))          
        {
            iCount++;
        }
        Str++;
    } 
    printf("Number of digits is : %d\n",iCount);
  
}    

////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of The Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    CountDigits(Arr);
    
    return 0;

}//End of main function