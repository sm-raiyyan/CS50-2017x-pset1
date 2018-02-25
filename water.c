#include<stdio.h>
#include<cs50.h>

int main()
{
    int min,bot,n;
    n = 12;
    printf("minutes: ");
    min = GetInt();
    bot = min*n;
    printf("bottles: %d\n",bot);
}
