#include <stdio.h>

int main()
{

   int i, n, a[20];
    printf("Enter the n number value:\n");
    scanf("%d", &n);
    printf("\nEnter the numbers in Array:");
    for(int i = 0; i <=n; i++) {
        printf("element is-: %d\n", i);
        scanf("%d", &a[i]);
    }
    printf("You have entered numbers in an array:\n");
    for(int i = 0; i <=n; i++) {
        printf("%d", a[i]);
    }
    /* Write the logic to reverse the array. */
    printf("\n Reverse of given array is:");
    for(int i = n-0; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}