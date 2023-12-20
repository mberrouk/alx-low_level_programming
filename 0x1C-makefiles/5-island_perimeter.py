#!/usr/bin/python3
"""
def island_perimeter(grid): return the perimeter described in grid.
"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid.
    @grid: the grid.
    """
    if grid == None or type(grid) is not list:
        return 0
    if type(grid[0]) is not list:
        return 0
    res = 0
    bord = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                res += 1
                if j - 1 >= 0 and grid[i][j - 1] == 1:
                    bord += 1
                if i > 0 and grid[i - 1][j] == 1:
                    bord += 1
    return res * 4 - bord * 2
