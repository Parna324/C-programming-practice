// 
#include <stdio.h>
void checkingCustomer(int expend){
    if (expend >=10000)
    {
        // premium customer 
        // giving 10% off
        int  discount = expend * 0.1;
        printf("You are Our premium Customer");
        printf("Your final product after discount is : %d",expend - discount - 200);
    }
    else{
        // regular customer
        // giving 5% off
        int discount =expend*0.05 ;
        printf("You are Our regular Customer");
        printf("Your final product after discount is : %d",expend - discount - 100);
        
    }
    
}
int main() {
    int expend;
    printf("Enter the number: ");
    scanf("%d", &expend);
    checkingCustomer(expend);
    return 0;
}

