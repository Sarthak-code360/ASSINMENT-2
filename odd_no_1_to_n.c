#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, n, sum=0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for(i=1; i<=n; i+=2)
    {
        sum += i;
    }
    printf("Sum of all odd numbers till n : %d", sum);
    return 0;
}

