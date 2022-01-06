#include <stdio.h>

int main() {
    double j, i, product;
    
    //Asks for the two integers and stores them in j and i
    printf("Enter the two number you want to multiply: \n");
    scanf("%lf %lf", &j, &i);
    
    //Adds the two numbers and prints them
    product = j * i;
    printf("The product of %.2lf and %.2lf is %.2lf", j, i, product);
    
    return 0;
}
