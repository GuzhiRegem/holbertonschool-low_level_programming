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
        for x in range(len(grid[0])):
            if (grid[y][x] == 1):
                perimeter += int(grid[y + 1][x] == 0 or y == (len(grid) - 1))
                perimeter += int(grid[y - 1][x] == 0 or y == 0)
                perimeter += int(grid[y][x + 1] == 0 or x == (len(grid[0]) - 1))
                perimeter += int(grid[y][x - 1] == 0 or x == 0)
    return perimeter
