/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GOL.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 20:28:51 by patrisor          #+#    #+#             */
/*   Updated: 2019/05/28 04:35:21 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GOL.h"

/*
 * Garbage collect once you are finished
 */
void	garbage_collect(t_cell **cell, char **grid)
{
	if (cell && *cell)
		ft_memdel((void **)cell);
	if (grid) 
	{
		for (int i = 0; i < GRID_WIDTH; i++)
			free(grid[i]);
		free(grid);
	}
}

/*
 * Print the state of the grid
 */
void	print_grid(char **grid)
{
	for (int y = 0; y < GRID_HEIGHT - 1; y++)
	{
		for (int x = 0; x < GRID_WIDTH - 1; x++)
			ft_putchar(grid[x][y]);
		ft_putchar('\n');
	}
}

/*
 * TODO:
 */
void	update_grid(char **grid, t_cell *cell)
{
	int		x;
	int		y;

	// TODO: Manipulate old state of grid to make it empty again
	// Set a new value to this grid
	x = 0;
	while (x < cell->x)
		x++;
	y = 0;
	while (y < cell->y)
		y++;
	grid[x][y] = '#';
}

/*
 * Initialize a new grid object and fill it with empty values
 */
char	**build_grid()
{
	char	**grid;

	// Allocate memory for grid
	grid = (char **)malloc(sizeof(char*) * GRID_WIDTH);
	for (int i = 0; i < GRID_WIDTH; i++)
		grid[i] = (char *)malloc(sizeof(char) * GRID_HEIGHT);
	// Fill grid
	for (int y = 0; y < GRID_HEIGHT - 1; y++)
		for (int x = 0; x < GRID_WIDTH - 1; x++)
			grid[x][y] = '.';
	return (grid);
}

/*
 * Initialize a new cell object and fill it's address values
 */
t_cell	*cell_init()
{
	t_cell	*cell;

	cell = (t_cell *)malloc(sizeof(t_cell));
	if (cell == NULL)
		return (NULL);
	cell->x = GRID_WIDTH / 2;
	cell->y = GRID_HEIGHT / 2;
	return (cell);
}

/*
 * TODO: Handles user input
 */
void	engine(t_cell *cell, char **grid)
{
	//char    user_input;
	// Detect Key Presses
	XEvent	event;

	XSelectInput(KeyPressMask | KeyReleaseMask);
	while (1)
	{
		// Resets user input
		user_input = '\0';
		// Print our grid
		print_grid(grid);
		// User input from STDIN (STDIN_FILENO = 0)

		/* keyboard events */
		if (event.type == KeyPress)
			printf("KeyPress: %x\n", event.xkey.keycode);
		//read(STDIN_FILENO, &user_input, 2);
		// TODO: User input with conditions
		/*
		if (user_input == 'w')
			cell->y -= 1;
		else if (user_input == 'a')
			cell->x -= 1;
		else if (user_input == 's')
			cell->y += 1;
		else if (user_input == 'd')
			cell->x += 1;
		else if (user_input == 'e')
			break;
		else
			continue; */
		// Update based on results of condition
		update_grid(grid, cell);
		// Update every 5 seconds
	}
}

int		main(void)
{
	t_cell	*cell;
	char	**grid;

	// Initialize a new cell object and fill it's address values
	cell = cell_init();
	// Initialize a new grid object and fill it with empty values
	grid = build_grid();
	// Initialize new cell on grid, then TODO:
	engine(cell, grid);
	// Free memory once you are finished with it
	garbage_collect(&cell, grid);
	return (0);
}
