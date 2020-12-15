#include <stdio.h>

int main()
{
    int i;

    /* total number of ASCII values exist are from 0 to 255 */
    for(i=0; i<=255; i++) 
    {
        printf("ASCII value of character %c = %d\t", i, i);
    }
    return 0;
}