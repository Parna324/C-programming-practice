// Find the Largest Number Among Three Numbers
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter a:%d\n");
    printf("Enter b:%d\n");
    printf("Enter c:%d\n");

    if(a>=b && a>=c){
        printf("a is greater");

    }
    else if(b>=a && b>=c){
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }
}