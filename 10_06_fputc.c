#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr =fopen("fputc.txt", "w");
    // char c = fgetc(ptr);
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);
    return 0;
}