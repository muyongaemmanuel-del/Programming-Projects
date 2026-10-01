#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    //input two numbers
    printf("Enter first number a:");
    scanf("%d", &a);
    printf("Enter second number b:");
    scanf("%d", &b);
    //arithmetic operation
    printf("\nResults:\n");
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    if(b!=0){
        printf("%d/%d=%.3f\n",a,b,(float)a/b);
        printf("%d%%%d=%d\n",a,b,a%b);
    }else{
    printf("Division and modulus by zero are not allowed.\n");
    }
    return 0;
}
