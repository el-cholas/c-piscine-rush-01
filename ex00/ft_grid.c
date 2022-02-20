#include <stdlib.h>
#include <stdio.h>

/* void	assemble_grid(int *matrix) */
void	assemble_grid(int grid[][])
{
	int x;
	int y;

	y = 0;
	while (y < 3)
	{
		x = 0;
		while (x < 3)
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

void	grid_controller()
{
	int grid[4][4];
	int solving;

	 assemble_grid(grid);

	/*
	while (solving)
	{
		printf("Hola\n");
	}
	*/
}
