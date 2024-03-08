// Write a program in C to display the multiplier table vertically from 1 to n.
#include<stdio.h>
int main() {
    int a,b,c;
    printf("Input upto the table number starting from 1 : ");
   scanf("%d",&c);
   printf("Multiplication table from 1 to %d \n",c);
   for(int i=1;i<=10;i++){
    for(int j=1;j<=c;j++){
        printf("%d x %d = %d",j,i,i * j);
    } 
    printf("\n");
   }


}