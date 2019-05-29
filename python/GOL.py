# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    GOL.py                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: patrisor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 02:55:08 by patrisor          #+#    #+#              #
#    Updated: 2019/05/28 04:39:14 by patrisor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Import https://github.com/boppreh/keyboard
import keyboard

GRID_HEIGHT = 49
GRID_WIDTH = 49

class Grid:
    def __init__(self, cols, rows):
        self.cols = cols
        self.rows = rows
        self.grid = []
        for y in range(cols):
            self.grid.append([])
            for x in range(rows):
                self.grid[y].append('.')

    # TODO:
    def update(self, cell):
        x = 0
        y = 0
        while x != cell.getX():
            x += 1
        while y != cell.getY():
            y += 1
        self.grid[x][y] = '#'
    
    # TODO: 
    def getGrid(self):
        for row in self.grid:
            print "".join(map(str, row))

class Cell:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def getX(self):
        return (self.x)

    def getY(self):
        return (self.y)

# def engine(cell, grid);

def main():
    # Initialize a new cell object and fill it's address values
    cell = Cell(GRID_WIDTH / 2, GRID_HEIGHT / 2)
    # Initialize a new grid object and fill it with empty values
    grid = Grid(GRID_WIDTH, GRID_HEIGHT)
    # Initialize cell on grid
    grid.update(cell)


if __name__ == "__main__":
    main()
