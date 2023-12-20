#!/usr/bin/python3
"""
def island_perimeter(grid): return the perimeter described in grid.
"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid.
    @grid: the grid.
    """
    if not grid or type(grid) is not type(list):
        return 0
    if type(grid[0]) is not type(list):
        return 0
    res = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if j - 1 >= 0 and grid[i][j - 1] == 0:
                    res += 1
                if j + 1 < len(grid[i]) and grid[i][j + 1] == 0:
                    res += 1
                if i + 1 < len(grid[i]) and grid[i + 1][j] == 0:
                    res += 1
                if i > 0 and grid[i - 1][j] == 0:
                    res += 1
    return res
