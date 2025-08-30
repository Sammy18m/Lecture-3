#include <stdio.h>
void main()
{
    int n, i = 1;
    printf("Please tell the value of n: ");
    scanf("%d", &n);

    do
    {
        printf("%d, ", (2*i));
        i++;
    }
    while(i <= n);
}
