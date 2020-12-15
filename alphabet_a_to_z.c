#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Alphabets: \n");
    for(ch='a'; ch<='z'; ch++)
    {
        printf("%c\t", ch);
    }

    return 0;
}
