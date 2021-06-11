#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrayLength;

    printf("How many numbers should the array store: ");
    scanf("%d", &arrayLength);

    int array[arrayLength];
    int i;

    /**< Asks for what the 10 numbers in the array should be */
    for(i=0; i<arrayLength; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }

    /**< Prints the numbers */
    printf("The numbers in order: \n");
    for(i=0; i<arrayLength; i++)
    {
        printf("%d ",array[i]);
    }

    /**< Prints the numbers in reverse*/
    printf("\nThe numbers in reverse order: \n");
    for(i=arrayLength-1; i>=0; i--)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
