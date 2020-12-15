#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,table;
    printf("enter the number whose table you want :   \n");
    scanf("%d",&n);

    for(i=0;i<=10;i++)
    {
        table = n*i;
        printf("%d*%d=%d \n",n,i,table);
    }
    return 0;
}
