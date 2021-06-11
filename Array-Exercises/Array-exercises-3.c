#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,result;

    printf("Gives the sum of all numbers in an array.\n\n");
    printf("Enter how many numbers you want to add: ");
    scanf("%d", &n);

    int arr[n];

    /**< Fills the Array */
    printf("\nEnter the number to be stored in each element:\n");
    for(i=0; i<n; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    /**< Gets the sum of the array, and prints the numbers in an equation*/
    for(i=0; i<n; i++)
    {
        result = result + arr[i];
        if(i<n-1) {printf("%d + ", arr[i]);}
        else {printf("%d = ", arr[i]);}
    }

    printf("\n%d\n\n",result);

    return 0;
}
