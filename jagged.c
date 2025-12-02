#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    printf("How many items in your list?\n");
    int count;
    scanf("%d",&count);
    char** array = malloc(count*sizeof(char*));
    for(int i=0;i<count;i++){
        char buffer[100];
        printf("What is the word?");
        scanf("%s",buffer);
        array[i] = calloc(strlen(buffer)+1,sizeof(char));
        strcpy(array[i],buffer);
    }
    for(int i=0;i<count;i++){
        printf("%s ",array[i]);
    }
    return 0;
}