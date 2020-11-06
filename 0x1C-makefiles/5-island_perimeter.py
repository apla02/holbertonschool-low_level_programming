#!/usr/bin/python3
'''
    function to perimeter of island
'''


def island_perimeter(grid):
    '''
     returns the perimeter of the island described in grid
    '''
    perimeter = 0
    print(grid)
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if grid[i + 1][j] == 1:
                    perimeter -= 2
                if grid[i][j + 1] == 1:
                    perimeter -= 2
    return (perimeter)
