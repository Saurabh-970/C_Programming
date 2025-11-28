/////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CountSpace(char  Str[])
{
    int iCount = 0;

    while(*Str != '\0')
    {    
        if(*Str == ' ' )         
        {
            iCount++;
        }
        Str++;
    } 
    printf("Number of space : %d\n",iCount);
  
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

    CountSpace(Arr);
    
    return 0;

}//End of main function