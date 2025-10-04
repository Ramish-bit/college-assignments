#include<stdio.h>

int main(){
    int p;
    int c;
    int m;
    float avg;
/* NAME : RAMISH
AGE     : 18
UIN     : 251P106
DIVISION: D
BATCH   : D2
*/
    printf("Enter marks of Physics: ");
    scanf("%d", &p);

    printf("Enter marks of Chemistry: ");
    scanf("%d", &c);

    printf("Enter marks of Mathematics: ");
    scanf("%d", &m);

    avg = p + c + m / 3.0;
   
    printf(" Avergae marks: %f\n", avg);

(avg >= 50) ? printf("You're eligible for admission.\n") : printf("You're not eligible for admission.\n");
    return 0;   

}