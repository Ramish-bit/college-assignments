
#include <stdio.h>
/*Sayyed Ramish
UIN=251P106,
CLASS=COMP/D/D2*/

int main()
{
    char str[100];
    int length=0;
    printf("\t\t**String Length Finder\n\n\n");
    printf("Enter Your String:");
    gets(str);

    while(str[length] != '\0')
    {
        length++;
    }
    printf("String Length: %d Characters",length);
    return 0;
}