#include <stdio.h>
/* NAME : Sayyed Ramish
   UIN : 251P106
   ROLL NO : 29
   */
int main() {
    int n,i;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int arr[n];  // Variable Length Array (VLA)

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array in original order: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Declare a pointer and initialize it to the last element of the array
    // 'arr + n - 1' is the address of the last element (arr[n-1])
    int *ptr = arr + n-1;
    printf("\nArray in reverse order: \n");
    while (ptr >= arr) {
        // Print the value at the address pointed to by 'ptr'
        printf("%d ", *ptr);
        // Move the pointer to the previous element in memory
        ptr--;
    }
return 0;
}