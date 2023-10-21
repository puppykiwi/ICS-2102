#include <stdio.h>

int cond(void){
    int children;
    printf("Please enter the number of children you have: ");
    scanf("%d", &children);

    if (children == 0){printf("Your allowable allowance is 1500/=\n");}
    else if(children == 1) {printf("Your allowable allowance is 3000/=\n");}
    else if(children == 2) {printf("Your allowable allowance is 4000/=\n");}
    else if(children == 3) {printf("Your allowable allowance is 6500/=\n");}
    else if(children == 4) {printf("Your allowable allowance is 7000/=\n");}
    else {printf("Your allowable allowance is 8000/=\n");}

    return (0);
}

int switcher(){
    int children;
    printf("Please enter the number of children you have: ");
    scanf("%d", &children);

    switch (children)
    {
    case (0):
        printf("Your allowable allowance is 1500/=\n");
        break;

    case (1):
        printf("Your allowable allowance is 3000/=\n");
        break;
    
    default:
        printf("Your allowable allowance is 8000/=\n");
        break;
    }
}


void main (void){
    //cond();
    switcher();

}