#include <stdio.h>

int main()
{
    int i, num, largest, smallest;

    printf("Enter 100 numbers:\n");
    scanf("%d", &num);
    largest = smallest = num;

    for (i = 2; i <= 100; i++)
    {
        scanf("%d", &num);
        if (num > largest)
            largest = num;
        if (num < smallest)
            smallest = num;
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
}


// test numbers :- 453 12 876 234 567 89 345 678 123 987 456 234 765 321 654 210 432 876 543 109 765 234 876 432 987 123 654 345 789 567234 876 432 654 321 987 543 210 678 345 123 876 432 567 234 765 345 876 432 109 987 654 321 543 210 765 432 876 123 567 234 789 345 654 987 432 210 876 543 123 654 432 765 321 987 210 543 876 345 109 876 234 654 321 987 543 210 765 432 109 345 876 543 210 654 321 987 432 765 123

