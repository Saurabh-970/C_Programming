/////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CountAll(char  Str[])
{
    int iCount = 0;
    int iSmall = 0;

    while(*Str != '\0')
    {    
        if((*Str >= 'A') && (*Str <= 'Z'))          
        {
            iCount++;
        }
        else if((*Str >= 'a') && (*Str <= 'z'))
        {

            iSmall++;
        }
        Str++;

    } 
    printf("Number of small character is : %d\n",iCount);
    printf("Number of capital character is : %d\n",iSmall);
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

    CountAll(Arr);
    
    return 0;

}//End of main function