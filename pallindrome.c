
/*Sayyed Ramish,
UIN=251P106,
CLASS=COMP/D/D2*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int i;
    printf("\t\t\t*** Pallindrome Finder ***\n\n\n");

    printf("\n Enter Your String:");
    gets(str);

    for(i=0; i < strlen(str) - 1; i++)
    {
        if(str[i] != str[strlen(str) - 1 - i])
        {
            printf("The String is NOT a Pallindrome");
            return 0;
        }
    }
    printf("\n The String is Pallindrome.");

    return 0;
}