#include <stdio.h>

int test()
{
    int side, nums, rounds, i;
    scanf("%d", &nums);
    for (i=0;i<nums;i++)
    {
        scanf("%d %d", &side, &rounds);
        int matrix[100][100] = {0};
        int row = 0, col = 0, k=1;
        int direction = 0;
        int *ptr;
        if (rounds == 1)
        {
            while (k <= (side*side))
            {
                matrix[row][col] = k;
                switch (direction)
                {
                case 0:
                    if (col + 1 <= side - 1 && matrix[row][col+1] == 0)
                        col++;
                    else
                    {
                        direction = 1;
                        row++;
                    }
                    break;
                case 1:
                    if (row + 1 <= side - 1 && matrix[row+1][col] == 0)
                        row++;
                    else
                    {
                        direction = 2;
                        col--;
                    }
                    break;
                case 2:
                    if (col - 1 >= 0 && matrix[row][col-1] == 0)
                        col --;
                    else
                    {
                        direction = 3;
                        row--;
                    }
                    break;
                case 3:
                    if (row - 1 >= 0 && matrix[row-1][col] == 0)
                        row--;
                    else
                    {
                        direction = 0;
                        col++;
                    }
                }
                k++;
            }
        }
        else
        {
            while (k <= (side*side))
            {
                matrix[row][col] = k;
                switch (direction)
                {
                case 0:
                    if (row + 1 <= side - 1 && matrix[row+1][col] == 0)
                        row++;
                    else
                    {
                        direction = 1;
                        col++;
                    }
                    break;
                case 1:
                    if (col + 1 <= side - 1 && matrix[row][col+1] == 0)
                        col++;
                    else
                    {
                        direction = 2;
                        row--;
                    }
                    break;
                case 2:
                    if (row - 1 >= 0 && matrix[row-1][col] == 0)
                        row --;
                    else
                    {
                        direction = 3;
                        col--;
                    }
                    break;
                case 3:
                    if (col - 1 >= 0 && matrix[row][col-1] == 0)
                        col--;
                    else
                    {
                        direction = 0;
                        row++;
                    }
                }
                k++;
            }
            ptr = &matrix[row][col-1];
        }
        printf("(0,0)=%p\n(%d,%d)=%p\n", &matrix[0][0], row, col-1, ptr);
        for (row = 0 ; row < side ; row++)
        {
            for (col = 0 ; col < side ; col++)
                printf("%5d", matrix[row][col]);
            printf("\n");
        }

    }
    return 0;
}
