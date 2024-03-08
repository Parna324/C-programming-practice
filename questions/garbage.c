#include<stdio.h>
int arithmetic(int a,int b, int c){
    if (c==0){
        return 0;
    }
    float n = (float)(b-a)/c + 1;
    if((int) n == 0 && n > 0){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    int a,b,c;
    printf("Enter numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",arithmetic(a,b,c));
    return 0;
}