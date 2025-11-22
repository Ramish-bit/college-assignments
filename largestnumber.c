
#include <stdio.h>
/*
 * Sayyed Ramish
 * UIN-251P106
 * Branch-C.S.E.(F.E.)
 * Batch-D2*/
int main()
{
    int n, i, a[100], large;    //Integer Array of size 100
    printf("Enter the Number of Elements=");
    scanf("%d", &n);

    for(i=0; i<=n-1; i++)
    {
        printf("Enter a value=");
        scanf("%d", &a[i]);
    }

    large=a[0];
    for(i=1; i<=n-1; i++)
    {
        if(large<a[i])
            large=a[i];
    }
    printf("\nLargest Number is = %d", large);
    return 0;
}