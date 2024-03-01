// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include<stdio.h>
int main() {
    int value[5];
    printf("Enter five vales: ");
    for(int i=0;i<5;++i){
        scanf("%d",&value[i]);   
         }
    for(int i=0;i<5;++i){
        printf("%d",value[i]);
    }
    return 0;
    
kdbka
}