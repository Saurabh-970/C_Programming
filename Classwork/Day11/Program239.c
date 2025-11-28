/////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strToggleX(char  Str[])
{
   
    while(*Str != '\0')
    {    
        if((*Str >= 'a' ) && (*Str <= 'z' ))       
        {
            *Str = *Str - 32;
        }
        else if((*Str >= 'A' ) && (*Str <= 'A' ))
        {
            *Str = *Str + 32;
        }   
    
        Str++;
    } 
  
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

    strToggleX(Arr);

    printf("Updated String is %s\n",Arr);

    
    return 0;

}//End of main function