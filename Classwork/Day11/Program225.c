/////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountOccurence(char  Str[], char ch)
{
    int iCount = 0;

    while(*Str != '\0')
    {    
        if(*Str == ch)          
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
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);   //Initial Space will work for all os "  %c"

    iRet = CountOccurence(Arr, cValue);
    printf("Number of occurences are %d\n",iRet);

    
    return 0;

}//End of main function