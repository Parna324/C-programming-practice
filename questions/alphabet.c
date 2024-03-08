#include<stdio.h>
int main(){
    char a;
    printf("Enter a alphabet: ");
    scanf("%c",&a);
    if((a>"a" && a<"z") || (a>"A"&& a<"Z")){
        printf("%c is alphabet");
    }
    else {
        printf("%c is not a alphabet");



    }
    return 0;
}