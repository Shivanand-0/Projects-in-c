#include <stdio.h>
#include <conio.h>
int frame(char arr[]);

char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void system();
int main()
{ 
    char index, i=1;
    // game play
    for (i; i <= 9; i++)
    {
        system("cls");
        frame(arr);
        int k = i;
        if (k % 2 == 0)
        {
            printf("Player 2");
            printf("\nEnter index to place your mark(X):");
        }
        else
        {
            printf("Player 1");
            printf("\nEnter index to place your mark(0):");
        }
        while (k <= 9)
        {
            scanf("%d", &index);
            if (index > 0 && index <= 9)
            {
                break;
            }
            else
            {
                printf("Invalid Number\n Try Again!:");
            }
        }
        k = i;
        if (k % 2 != 0)
        {
            arr[index] = '0';
        }
        else
        {
            arr[index] = 'X';
        }
        // game Result
        if (arr[1] == arr[2] && arr[2] == arr[3])
        {
            if (k % 2 == 0)
            {
                printf("\nPlayer 2 win");
            }
            else
            {
                printf("\nPlayer 1 win");
            }
            break;
        }
        else if (arr[4] == arr[5] && arr[5] == arr[6])
        {
            if (k % 2 == 0)
            {
                printf("\nPlayer 2 win");
            }
            else
            {
                printf("\nPlayer 1 win");
            }
            break;
        }
        else if (arr[7] == arr[8] && arr[8] == arr[9])
        {
            if (k % 2 == 0)
            {
                printf("\nPlayer 2 win");
            }
            else
            {
                printf("\nPlayer 1 win");
            }
            break;
        }
        else if (arr[1] == arr[4] && arr[4] == arr[7])
        {
            if (k % 2 == 0)
            {
                printf("\nPlayer 2 win");
            }
            else
            {
                printf("\nPlayer 1 win");
            }
            break;
        }
        else if (arr[2] == arr[5] && arr[5] == arr[8])
        {
            if (k % 2 == 0)
            {
                printf("\nPlayer 2 win");
            }
            else
            {
                printf("\nPlayer 1 win");
            }
            break;
        }
        else if (arr[3] == arr[6] && arr[6] == arr[9])
        {
            if (k % 2 == 0)
            {
                printf("\nPlayer 2 win");
            }
            else
            {
                printf("\nPlayer 1 win");
            }
            break;
        }
        else if (arr[1] == arr[5] && arr[5] == arr[9])
        {
            if (k % 2 == 0)
            {
                printf("\nPlayer 2 win");
            }
            else
            {
                printf("\nPlayer 1 win");
            }
            break;
        }
        else if (arr[3] == arr[5] && arr[5] == arr[7])
        {
            if (k % 2 == 0)
            {
                printf("\nPlayer 2 win");
            }
            else
            {
                printf("\nPlayer 1 win");
            }
            break;
        }
    }
    printf("\n****Result****\n");
    frame(arr);
}
int frame(char arr[])
{
    printf("    |    |    \n");
    printf(" %c  |  %c |  %c  \n", arr[1], arr[2], arr[3]);
    printf("____|____|____\n");
    printf("    |    |    \n");
    printf("  %c | %c  |  %c  \n", arr[4], arr[5], arr[6]);
    printf("____|____|____\n");
    printf("    |    |    \n");
    printf("  %c | %c  |  %c  \n", arr[7], arr[8], arr[9]);
    printf("____|____|____\n");

    return 0;
}