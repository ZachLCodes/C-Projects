#include <stdio.h>
int main(){
    printf("What would you like to use power rule on?\nPlease use this form numx^num\n");
    int base;
    int power;
    scanf("%dx^%d",&base,&power);
    if(power - 1 == 1){
        printf("The result is %dx",base*power);
    }else if(power - 1 == 0){
        printf("The result is %d",base);
    }else{
        printf("The result is %dx^%d",base*power,power-1);
    }
    return 0;
}