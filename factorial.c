
#include <stdio.h>
// NAME: Sayyed Ramish
// BRANCH: C.S.E. (F.E.)
// BATCH: D2
// UIN: 251P106

int factorialIterative(int num)    //function defination
{
    int prod=1;
    for(int i=1; i<=num; i++)
    {
        prod*=i;    //prod=prod*i
    }
    return prod;
}

int main()
{
    int num;
    printf("\t\t***Iterative Factorial function***\n\n");    //Title
    printf("Enter Number=");
    scanf("%d",&num);
    printf("Factorial of %d is %d", num, factorialIterative(num));    //funtion call
    return 0;
}