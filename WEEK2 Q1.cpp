#include <stdio.h>
int main()
{
    int num, sum=0;

    /* Input a number from user */
    printf("Enter any number : ");
    scanf("%d", &num);

    while(num!=0)
    {
        sum += num % 10;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
