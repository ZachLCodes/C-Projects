#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    printf("Is the data a population(0) or sample(1)?\n");
    int choice;
    scanf("%d",&choice);
    printf("What is the size of the data set?\n");
    int size;
    scanf("%d",&size);
    double *data = malloc(sizeof(double)*size);
    double mean = 0;
    for(int i=0;i<size;i++){
        printf("Item %d: ",i);
        scanf("%lf",&data[i]);
        mean = mean+data[i];
    }
    mean = mean/size;
    double total = 0;
    for(int i=0;i<size;i++){
        data[i] = pow((data[i]-mean),2);
        total = total+data[i];
    }
    if(choice == 0){
        total = total/size;
    }else if(choice == 1){
        total = total/(size-1);
    }
    total = sqrt(total);
    printf("The standard deviation for your data set is %lf",total);
    return 0;
}