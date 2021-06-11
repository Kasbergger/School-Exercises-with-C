#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
    int i;
    
    /**< Asks for what the 10 numbers in the array should be */
    for(i=0; i<10; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }

    /**< Prints the numbers */
    for(i=0; i<10; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
