// Read whole file text using fgetc();
#include<stdio.h>
int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("generated.txt", "r");
    c = fgetc(ptr);
    while(c!=EOF) // EOF - END OF FILE
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0; 
}