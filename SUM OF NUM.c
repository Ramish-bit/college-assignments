#include <stdio.h>

/*NAME   : RAMISH
DIVISION : D
BATCH    : D2
BRANCH   : COMPUTER ENGINEERING
UIN      : 251P106*/

int main() {
    int start, end, sum = 0;
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    for (int i = start + 1; i < end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("Sum of odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}