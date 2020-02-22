#!/usr/bin/python3


def island_perimeter(grid):
    """Perimeter of a Grid
    """
    Perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    Perimeter = Perimeter + 1
                if j == len(grid) - 1 or grid[i][j + 1] == 0:
                    Perimeter = Perimeter + 1
                if grid[i - 1][j] == 0 or i == 0:
                    Perimeter = Perimeter + 1
                if grid[i][j - 1] == 0 or j == 0:
                    Perimeter = Perimeter + 1
    return (Perimeter)
