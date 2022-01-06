#include <stdio.h>

int main() {
    int y, x, quotient, remainder;
    
    //Asks for the integers
    printf("Enter the dividend: ");
    scanf("%d", &y);
    printf("Enter the divisor: ");
    scanf("%d", &x);
    
    //Finds the quotient
    quotient = y/x;
    
    //Finds the remainder
    remainder = y%x;
    
    //Prints the results
    printf("The quotient of %d and %d is %d, and the remainder is %d",y, x, quotient, remainder);
    
    return 0;
}
