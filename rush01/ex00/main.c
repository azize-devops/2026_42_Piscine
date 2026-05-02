/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   main.c                                                        :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: azdursun <azdursun@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/02 14:13:53 by azdursun                     #+#    #+#              */
/*   Updated: 2026/05/02 14:13:53 by azdursun                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include <rush01.h>

/*
** Initializes the 4x4 grid with zeros
*/
static void	init_grid(int grid[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

/*
** Entry point: validates input, parses clues, solves and prints result
*/
int	main(int argc, char **argv)
{
	int	grid[SIZE][SIZE];
	int	clues[16];

	if (argc != 2)
	{
		print_error();
		return (1);
	}
	if (!parse_input(argv[1], clues))
	{
		print_error();
		return (1);
	}
	init_grid(grid);
	if (solve(grid, clues, 0))
		print_grid(grid);
	else
		print_error();
	return (0);
}
