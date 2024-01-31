#include<stdio.h>
int main() {
    int*pc, c;
    c=12;
    printf("Address of c:%p\n",&c);
    printf("Value of c:%d\n\n",c);

    c=22;
    printf("Address of c:%p\n",&c);
    printf("Value of c:%d\n\n",c);

    c=43;
    printf("Address of c:%p\n",&c);
    printf("Value of c:%d\n\n",c);

    c=12345;
    printf("Address of c:%p\n",&c);
    printf("Value of c:%d\n\n",c);



}