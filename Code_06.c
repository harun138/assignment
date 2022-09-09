#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100];
    int i;
    printf("Enter Encoded Text: ");
    gets(s1);

    for (i = 0; s1[i] != '\0'; i++)
    {
        s1[i] -= 7;
    }

    printf("Decoded Text: %s", s1);

    return 0;
}