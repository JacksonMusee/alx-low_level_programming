#!/usr/bin/python3
"""
I'm an interesting module. With only one function
"""

def island_perimeter(grid):
    """
    This function calculates and returns the primeter of an\
            descrbed by grid
    """

    grid_len = len(grid)
    i = 0
    j = 0
    peri = 0

    while i < grid_len:
        crt_len = len(grid[i])

        while j < crt_len:  

            if grid[i][j] == 1:
                if j == 0 or grid[i][j - 1] == 0:
                    peri = peri + 1

                if j == crt_len - 1 or grid[i][j + 1] == 0:
                    peri = peri + 1

                if i == 0 or grid[i - 1][j] == 0:
                    peri = peri + 1

                if i == grid_len - 1 or grid[i + 1][j] == 0:
                    peri = peri + 1

            j = j + 1

        j = 0
        i = i + 1

    return peri
