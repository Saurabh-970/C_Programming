/////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(char  Str[])
{
    int iCount = 0;

    while(*Str != '\0')
    {    
        if(*Str == 'a')
        {
            iCount++;
        }
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

    iRet = Count(Arr);
    printf("Count of a is %d\n",iRet);

    
    return 0;

}//End of main function