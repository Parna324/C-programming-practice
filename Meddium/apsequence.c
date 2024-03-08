#include <stdio.h>

int main() {
    int a,b,c ,n=1;
    printf("enter the number : ");
    scanf("%d %d %d",&a,&b,&c);
    for (int i = 0; i < n ; i++)
    {
        int ap= a+(i-1)*c;
        // printf("%d\n",ap);
        if (ap==b) 
        {
            printf("1");
            break;
        }
        else{
            if (ap>b )
            {
                printf("0");
                break;
            }
            
        }
        n+=1;
    }
    
    return 0;
}