#include <stdio.h>
// NAME: Sayyed Ramish
// BRANCH: C.S.E. (F.E.)
// BATCH: D2
// UIN: 251P106

int isPrimeNumber(int num){
    for (int i=2; i<num; i++){
        if (num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int start_num, end_num, i;
    printf("Enter starting number.\n");
    scanf("%d", &start_num);
    printf("Enter ending number.\n");
    scanf("%d", &end_num);

    i=start_num<2 ? 2 : start_num;
    printf("Prime numbers between %d and %d are:\n", start_num, end_num);
    while(i<=end_num){
        if(isPrimeNumber(i)){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}