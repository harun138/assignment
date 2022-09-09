#include <stdio.h>

int binary_rec(int);

int main()
{
    int num;

    printf("Enter a Decimal number\n");
    scanf("%d", &num);

    printf("Binary Equivalent of %d is %d\n", num, binary_rec(num));

    return 0;
}

int binary_rec(int num)
{
    if (num == 0)
        return 0;
    else
        return ((num % 2) + 10 * binary_rec(num / 2));
}