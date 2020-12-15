#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n, FirstDigit, LastDigit, digits;

    printf("Enter any number: ");

    scanf("%d", &n);

    LastDigit = n % 10;     

    digits = (int)log10(n); 

    FirstDigit = (int)(n) / pow(10, digits); 

    printf("First digit = %d\n", FirstDigit);
    
    printf("Last digit = %d\n", LastDigit);

    return 0;
}
