#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("All even numbers between 1 to 100 are : \n");
    for(int i=1;i<=100;i++)
    {   
        if(i%2==0)
        {
            printf("%d\t", i);    
        }
    }
    return 0;
}
