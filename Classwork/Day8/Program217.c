/////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int strlenX(char  Str[])
{
    int iCount = 0;

    while(*Str != '\0')
    {    
        iCount++;
        Str++;

    } 
    
    return iCount;

}    

////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of The Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);
    printf("String Length is %d\n",iRet);

    
    return 0;

}//End of main function