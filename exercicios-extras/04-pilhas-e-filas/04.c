#include <stdio.h>
#include <stdlib.h>

int can_organize(int n, int *desired_order)
{
    int stackA[n];
    int stackB[n];
    int stackS[n];
    int stackA_top = n - 1;
    int stackB_top = -1;
    int stackS_top = -1;

    for (int i = 0; i < n; i++)
    {
        stackA[i] = n - i;
    }

    int current_index = 0;

    while (stackA_top != -1 || stackS_top != -1)
    {
        if (stackS_top >= 0 && stackS[stackS_top] != desired_order[current_index] && stackA_top == -1)
            return 0;
        if (stackS_top >= 0 && stackS[stackS_top] == desired_order[current_index])
        // 1run: stack S will be empty
        {
            stackB[++stackB_top] = stackS[stackS_top--];
            current_index++;
            // printf("if the element is on top of stack S matches the current element\n");
            // print_stacks(stackA, stackA_top, stackB, stackB_top, stackS, stackS_top);
        }
        else if (stackA[stackA_top] == desired_order[current_index])
        // 1run: stack A = {5, 4, 3, 2}
        {
            stackB[++stackB_top] = stackA[stackA_top--];
            current_index++;
            // printf("if the element is on top of stack A matches the current element\n");
            // print_stacks(stackA, stackA_top, stackB, stackB_top, stackS, stackS_top);
        }
        else
        {
            while (stackA_top >= 0 && stackA[stackA_top] != desired_order[current_index])
            {
                stackS[++stackS_top] = stackA[stackA_top--];
                // printf("if the element is not on top of stack A\n");
                // print_stacks(stackA, stackA_top, stackB, stackB_top, stackS, stackS_top);
            }
            if (stackA_top >= 0)
            {
                stackB[++stackB_top] = stackA[stackA_top--];
                current_index++;
                // printf("if the element is on top of stack A matches the current element\n");
                // print_stacks(stackA, stackA_top, stackB, stackB_top, stackS, stackS_top);
            }
        }
    }
    return 1;
}

int main()
{
    int n;
    while (scanf("%d", &n) && n != 0)
    {
        while (1)
        {
            int desired_order[1000];
            // for each block, read the desired order
            scanf("%d", &desired_order[0]);
            // read the first int number alone, to check
            // if the user entered 0 or not
            if (desired_order[0] == 0)
            {
                break;
            }
            // read the rest of the numbers
            for (int i = 1; i < n; i++)
            {
                scanf("%d", &desired_order[i]);
            }
            if (can_organize(n, desired_order))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        printf("\n");
    }
    return 0;
}
// void print_stacks(int *stackA, int stackA_top, int *stackB, int stackB_top, int *stackS, int stackS_top)
// {
//     // we will print the stacks from the top to the bottom
//     printf("Stack A: ");
//     for (int i = stackA_top; i >= 0; i--)
//     {
//         printf("%d ", stackA[i]);
//     }
//     printf("\n");

//     printf("Stack B: ");
//     for (int i = stackB_top; i >= 0; i--)
//     {
//         printf("%d ", stackB[i]);
//     }
//     printf("\n");

//     printf("Stack S: ");
//     for (int i = stackS_top; i >= 0; i--)
//     {
//         printf("%d ", stackS[i]);
//     }
//     printf("\n");
// }