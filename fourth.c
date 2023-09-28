#include <stdio.h>

int main(void){
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);

    if (a < 0) {printf("The value %d is negative\n", a);}
    else if ( a > 0) {printf("The values %d is positive\n");}
    else {printf("The value is 0\n");}

    return 0;
}

