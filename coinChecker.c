#include <stdio.h>

int main(){

    //print msg, scan for input, switch case for properties
    printf("Enter cent value\n");

    int enteredValue;
    scanf("%d", &enteredValue);

    switch(enteredValue){

        case 1: printf("Properties: copper = lightweight, small with smooth outer edge\n"); break;
        case 2: printf("Properties: copper = lightweight, a little bigger with a groove in the outer edge\n"); break;
        case 5: printf("Properties: copper = lightweight, bigger, with smooth outer edge\n"); break;
        case 10: printf("Properties: small and thick, with corrugated outer edge\n"); break;
        case 20: printf("Properties: bigger and thick, with a few dents on the outer edge\n"); break;
        case 50:  printf("Properties: big and thick, with corrugated outer edge\n"); break;
        case 100: printf("Properties: smaller than 50 and thick, with partly corrugated outer edge\n"); break;
        case 200: printf("Properties: big and thick, with finely corrugated outer edge\n"); break;
        default: printf("No coin exists for the entered value %d.\n", enteredValue); break;
    }
    return 0;
}