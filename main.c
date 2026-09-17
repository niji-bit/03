#include <stdio.h>
int main(void){
    int a;
    int b;

    printf("numerator :");
    scanf("%i",&a);
    printf("\ndenominator :");
    scanf("%i",&b);
    
    printf("The result is %f\n",(float)a/b);
    
    return 0;
}