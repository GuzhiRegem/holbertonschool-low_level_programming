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
                perimeter += int(grid[y + 1][x])
                perimeter += int(grid[y - 1][x])
                perimeter += int(grid[y][x + 1])
                perimeter += int(grid[y][x - 1])
    return perimeter
