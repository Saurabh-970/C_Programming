/////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountVowels(char  Str[])
{
    int iCount = 0;

    while(*Str != '\0')
    {    
        if((*Str == 'a') || (*Str == 'e') || (*Str == 'i') ||( *Str =='o') || (*Str =='u'))
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

    iRet = CountVowels(Arr);
    printf("Number of vowels are %d\n",iRet);

    
    return 0;

}//End of main function