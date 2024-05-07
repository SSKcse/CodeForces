#include <stdio.h>

#define MAX_SIZE 21

int grid[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE][MAX_SIZE];

int dirX[4] = {-1, 0, 1, 0};
int dirY[4] = {0, 1, 0, -1};

void dfs(int row, int col)
{
    visited[row][col] = 1;
    for (int i = 0; i < 4; i++)
    {
        int newRow = row + dirX[i];
        int newCol = col + dirY[i];
        if (newRow >= 0 && newRow < MAX_SIZE && newCol >= 0 && newCol < MAX_SIZE && grid[newRow][newCol] == grid[row][col] && !visited[newRow][newCol])
        {
            dfs(newRow, newCol);
        }
    }
}

int main()
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        for (int j = 0; j < MAX_SIZE; j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        for (int j = 0; j < MAX_SIZE; j++)
        {
            if (!visited[i][j])
            {
                dfs(i, j);
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
