#define CRT SECURE NO WARNINGS
#include<stdio.h>
#include <iostream>

int main() {

    //print msg
    printf("Hello_University_of_Klagenfurt!\n");
    getchar();

    //sum of two integers: print msg, scan for input, calculate, print sum
    int number1, number2, sum;
    printf("Please enter two integers:\n");
    scanf("%d %d",&number1,&number2);

    sum = number1 + number2;

    printf("%d + %d = %d",number1, number2, sum);

    return 0;

}
