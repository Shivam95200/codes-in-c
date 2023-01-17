#include<stdio.h>

int main()
{
    int arr[100],i,n, temp;

    printf("How many numbers to read? (< 100): ");
    scanf("%d", &n);

    /* Reading array using array itself as a pointer */
    printf("Enter %d numbers:\n", n);
    for(i=0;i< n;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", (arr+i));
    }

    printf("\nOriginal array is: \n");
    for(i=0;i< n;i++)
    {
        printf(" %d\t", *(arr+i));
    }

    /* Reversing array */
    for(i=0;i< n/2;i++)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + n -1 -i);
        *(arr + n -1 -i) = temp;
    }

    /* Displaying reversed array content */
    printf("\nReversed array is: \n");
    for(i=0;i< n;i++)
    {
        printf(" %d\t", *(arr+i));
    }

    return 0;
}

