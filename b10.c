#include <stdio.h>
int main()
{
    int a,b,c;
    for(a=1; a<=9; a++)
        for(b=0; b<=8; b++)
        if(a+b<=9){
            c=9-a-b;
            printf("%d%d%d  ",a,b,c);
        }
    return 0;
}
