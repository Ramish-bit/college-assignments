#include <stdio.h>

/*NAME   : RAMISH
DIVISION : D
UIN      : 251P106
BATCH    :D2*/

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is an even number.\n", num);
    else
        printf("%d is an odd number.\n", num);

    return 0;
}