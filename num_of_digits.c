#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int count = 0;
    printf("Enter any number: \n");
    scanf("%d", &num);
    do
    {
        count++;
        num /= 10;
    } 
    while(num != 0);
    printf("Total digits: %d \n ", count);

    return 0;
}
