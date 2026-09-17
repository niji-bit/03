#include <stdio.h>
int main(void){
    char c;
    char d;

    printf("enter a character:");
    scanf("%c",&c);
    
    d= c+1;
    printf("The next character of %c is %c\n",c,d);
    
    return 0;
}