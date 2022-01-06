#include <stdio.h>

int main() {
    int a;
    long b; // equivalent to long int b;
    long long c; // equivalent to long long int c;
    double e;
    long double f;
    
    //Prints the size of the defferent datatypes
    printf("The size of int: %zu bytes\n", sizeof(a));
    printf("The size of long int: %zu bytes\n", sizeof(b));
    printf("The size of long long int: %zu bytes\n", sizeof(c));
    printf("The size of double: %zu bytes\n", sizeof(e));
    printf("The size of long double: %zu bytes\n", sizeof(f));
    
    return 0;
}
