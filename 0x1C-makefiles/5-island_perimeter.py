#!/usr/bin/python3
"""
    5-island_perimeter.py
    module
    return: nothing
"""


def island_perimeter(grid):
    """ island perimeter """
    perimeter = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if (grid[y][x] == 1):
                perimeter += int(y == 0 or grid[y-1][x] == 0)
                perimeter += int(x == 0 or grid[y][x-1] == 0)
                perimeter += int(y == len(grid)-1 or grid[y+1][x] == 0)
                perimeter += int(x == len(grid[y])-1 or grid[y][x+1] == 0)
    return perimeter
