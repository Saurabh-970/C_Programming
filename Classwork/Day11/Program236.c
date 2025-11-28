/////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Change(char  Str[])
{
   
    while(*Str != '\0')
    {    
        if((*Str >= 'a' ) && (*Str <= 'z' ))       
        {
            *Str = '_';
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

    Change(Arr);

    printf("Updated String is %s\n",Arr);

    
    return 0;

}//End of main function