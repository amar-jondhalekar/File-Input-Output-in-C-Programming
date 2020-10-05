#include<stdio.h>
int main()
{
    FILE *fptr;
    int num = 234;
    fptr = fopen("generated.txt", "w");
    fprintf(fptr, "The number is: %d\n", num);
    fprintf(fptr, "This is Amar Jondhalekar.");
    fclose(fptr);
    return 0;
}