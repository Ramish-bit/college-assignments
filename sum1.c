#include <stdio.h>

// Function to add two numbers using pointers
int addNumbers(int *a, int *b) {
    return (*a + *b);   // Dereferencing pointers to get values
}

int main() {
    int num1, num2, sum;

    // Taking input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calling function with pointers
    sum = addNumbers(&num1, &num2);

    // Output
    printf("Sum = %d\n", sum);

    return 0;
}