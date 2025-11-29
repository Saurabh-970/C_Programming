/////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrRevX(char *str)
{   
    char *Start = str;
    char *End =   str;

    char temp ='\0';
    while(*End != '\0')
    {
        End++;
    }
    End--;

    while(*Start <= *End)
    {       
        temp = *Start;
        *Start = *End;
        *End =temp;
        
        Start++;
        End--;
    }
  
    printf("\n");

}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter  string :\n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);
    printf("Updated string is : %s\n",Arr);


    return 0;

}