#include<stdio.h>
int main()
{
    FILE *ptr;
    int a, b, c;
    ptr = fopen("integer.txt", "r");
    fscanf(ptr, "%d", &a);
    fscanf(ptr, "%d", &b);
    fscanf(ptr, "%d", &c);
    printf("The value of a, b and c is: %d %d %d", a, b, c);
    fclose(ptr);
    return 0;
}