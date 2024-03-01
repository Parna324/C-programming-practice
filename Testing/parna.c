#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int a = 10;
    float b = 25.67f;
    double c = 34.987;
    
    // Casting: converting from 
for (int i = 0; i < a; i++)
{
    if(i % 2 == 0) {
        char x = 'A' + i / 10;
        char y = '0' + i % 10;
        printf("%c%c\n", x, y);
    } else {
        printf("* ");
}

    
    return 0;
}