
#include <stdio.h>
/*
 * Sayyed Ramish
 * UIN-251P106
 * Branch-C.S.E.(F.E.)
 * Batch-D2*/

int factorialRecursive(int num)
{
    if(num==1)    //IF Number is 0 or 1 then Factorial is 1
    {
        return 1;
    }
    return num*factorialRecursive(num-1);    //Recursive Function
}

int main()
{
    int num;
    printf("\t\t***Recursive Factorial***\n\n");    //Title
    printf("Enter Number = ");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,factorialRecursive(num));    //calling function
    return 0;
}