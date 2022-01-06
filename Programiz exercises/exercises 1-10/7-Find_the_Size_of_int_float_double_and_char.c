#include <stdio.h>

int main() {
    int iType;
    float fType;
    double dType;
    char cType;
    
    //Prints the size of the defferent datatypes
    printf("The size of an int: %zu bytes\n", sizeof(iType));
    printf("The size of a float: %zu bytes\n", sizeof(fType));
    printf("The size of a double: %zu bytes\n", sizeof(dType));
    printf("The size of a char: %zu bytes\n", sizeof(cType));
    
    return 0;
}
