#include <stdio.h>

void main (void){
    int a, b, c;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);

    c = a + b;
    printf("%d + %d = %d", a, b, c);
}