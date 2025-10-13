#include <stdio.h>
#include <stdlib.h>

void process_deck(int n)
{
    // if the user enter 0 then return and stop the program
    if (n == 0)
    {
        return;
    }
    if (n == 1)
    {
        printf("Discarded cards:\nRemaining card: 1\n");
        return;
    }

    int deck[n];
    int discarded[n];
    int discarded_count = 0;
    int front = 0;
    int back = n - 1;

    // initialize the deck
    for (int i = 0; i < n; i++)
    {
        deck[i] = i + 1;
    }

    // while there are at least 2 cards in the deck
    while (1)
    {
        // discard the front card
        discarded[discarded_count++] = deck[front];
        front++;
        // move all the cards to the left
        // and then move the front card to the back
        if (front == back)
        {
            break;
        }
        int tmp = deck[front];
        for (int i = front; i < back; i++)
        {
            deck[i] = deck[i + 1];
        }
        deck[back] = tmp;
    }

    printf("Discarded cards:");
    for (int i = 0; i < discarded_count; i++)
    {
        if (i > 0)
            printf(",");
        printf(" %d", discarded[i]);
    }
    printf("\nRemaining card: %d\n", deck[front]);
}

int main()
{
    int n;
    while (scanf("%d", &n) && n != 0)
    {
        process_deck(n);
    }
    return 0;
}