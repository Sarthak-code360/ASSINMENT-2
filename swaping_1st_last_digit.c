#include <stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;
    printf("Enter any number: ");
    scanf("%d", &num);
    lastDigit  = num % 10;
    digits     = (int)log10(num);
    firstDigit = (int)(num / pow(10, digits)); 
    swappedNum  = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += num % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;
    printf("Swapped Number : %d", swappedNum);
return 0;
}
