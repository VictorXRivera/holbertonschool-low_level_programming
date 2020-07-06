#!/usr/bin/python3
""" Island perimeter """


def island_perimeter(grid):
    """ Function to find island perimeter """

    W_zone = 0
    L_zone = 0
    for h in range(len(grid)):
        for b in range(len(grid)):
            if grid[h][b] == 1:
                W_zone += 1
                if h != len(grid) - 1:
                    if grid[h + 1][b] == 1:
                        L_zone += 1
                if b != len(grid[h]) - 1:
                    if grid[h][b + 1] == 1:
                        L_zone += 1
    perimeter = (W_zone * 4) - (L_zone * 2)
    return perimeter
