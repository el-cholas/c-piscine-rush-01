#include <stdlib.h>
#include <stdio.h>

/* void	assemble_grid(int *matrix) */
void	assemble_grid(int grid[][], int grid_size)
{
	int x;
	int y;

	y = 0;
	while (y < grid_size - 1)
	{
		x = 0;
		while (x < grid_size - 1)
		{
			grid[x][y] = -1;
			x++;
		}
		y++;
	}
}

/*
check_row(int *row)
{
printf("Hola\n", );
}
*/

void	grid_controller(int grid_size)
{
	int grid[grid_size][grid_size];
	int solving;

	 assemble_grid(grid, grid_size);

	/*
	while (solving)
	{
		printf("Hola\n");
	}
	*/
}
