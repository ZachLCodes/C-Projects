#include <stdio.h>
int main(){
    printf("What is the size of the sequence?\n");
    int size;
    scanf("%d",&size);
    printf("Enter the first and second numbers in sequence:\n");
    int a;
    int b;
    int temp;
    scanf("%d %d",&a,&b);
    printf("%d %d",a,b);
    for(int i=0;i<size-2;i++){
        printf(" %d",a+b);
        temp = a;
        a=b;
        b=b+temp;
    }
    return 0;
}