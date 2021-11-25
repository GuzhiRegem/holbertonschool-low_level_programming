#!/usr/bin/python3
"""
    5-island_perimeter.py
    module
    return: nothing
"""


def island_perimeter(grid):
    """ island perimeter """
    if grid is None or type(grid) is not list or type(grid[0]) is not list:
        return 0
    perimeter = 0
    width = len(grid[0])
    height = len(grid)
    for y in range(height):
        for x in range(width):
            if (grid[y][x] == 1):
                perimeter += int(grid[y + 1][x])
                perimeter += int(grid[y - 1][x])
                perimeter += int(grid[y][x + 1])
                perimeter += int(grid[y][x - 1])
    return (perimeter)
