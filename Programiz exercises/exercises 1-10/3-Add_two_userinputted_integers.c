#include <stdio.h>

int main() {
    int j, i, sum;
    
    //Asks for the two integers and stores them in j and i
    printf("Enter the two integers you want to add: \n");
    scanf("%d %d", &j, &i);
    
    //Adds the two numbers and prints them
    sum = j + i;
    printf("The sum of %d and %d is %d", j, i, sum);
    
    return 0;
}
