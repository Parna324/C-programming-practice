// Find the Largest Number Among Three Numbers
#include<stdio.h>
int main(){
    double a,b,c;
    
     printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is greater %d",a);
        if(b>a && b>c){
        printf("b is greater %d",b);
    }
    }
    else{
        printf("c is greater %d",c);
    }
    return 0;

    }
    
    
