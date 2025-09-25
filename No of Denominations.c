#include <stdio.h>

int main()

{
    int amount, notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[9] = {0}; // To store count of each note
    int i, totalNotes = 0;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    for(i = 0; i < 9; i++)
    {
        if(amount >= notes[i])
        {
            count[i] = amount / notes[i];   // Number of notes of this denomination
            amount = amount % notes[i];     // Remaining amount
            totalNotes += count[i];
        }
    }

    printf("Minimum number of notes required = %d\n", totalNotes);

    printf("Notes used:\n");
    for(i = 0; i < 9; i++)
    {
        if(count[i] != 0)
        {
            printf("%d x %d\n", notes[i], count[i]);
        }
    }

    return 0;
}
