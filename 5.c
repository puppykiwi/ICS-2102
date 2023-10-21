#include <stdio.h>

int main(){
    int sum = 0;
    int num = 400;

    do{
        if (num % 9 == 0)
        {sum += num;}
        num++;
        printf("%d - %d -\n", sum, num);
    }
    while (num <= 900);
    
    return 0;
}