#include <stdio.h>

int main() {
    char c;
    
    //Asks for the character
    printf("Enter a character: ");
    scanf("%c", &c);
    
    //Prints the char (%c) and its ASCII value (%d)
    printf("ASCII value of %c, is %d", c, c);
    
    return 0;
}
