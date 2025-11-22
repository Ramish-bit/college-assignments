
#include <stdio.h>
/*
 * Sayyed Ramish
 * UIN-251P106
 * Div-C.S.E.(F.E.)
 * Batch-D2*/

void counter()    //void means no return data type;
{
    //int count=0;
    static int count=0;    //static storage class;
    count++;
    printf("Counter Function Call : %d\n",count);
}

int main()
{
    printf("\t\t***Storage Class***\n\n");
    for(int i=1; i<=8; i++)
    {
        counter();    //counter function called 8 times;
    }
    return 0;
}