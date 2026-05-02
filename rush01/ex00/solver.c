/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   solver.c                                                      :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: azdursun <azdursun@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/02 14:16:09 by azdursun                     #+#    #+#              */
/*   Updated: 2026/05/02 14:16:09 by azdursun                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "rush01.h"

/*
** Checks if num already exists in the same row or column
** Returns 1 if no duplicate, 0 if duplicate found
*/
static int	check_duplicate(int grid[SIZE][SIZE], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

/*
** Wrapper function to check if a number can be placed at position
*/
int	is_valid_placement(int grid[SIZE][SIZE], int row, int col, int num)
{
	return (check_duplicate(grid, row, col, num));
}

/*
** Verifies all clues match when grid is fully filled
** Checks visibility from all 4 directions for each row/column
*/
int	is_complete(int grid[SIZE][SIZE], int *clues)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (!check_col_top(grid, i, clues[i]))
			return (0);
		if (!check_col_bottom(grid, i, clues[i + 4]))
			return (0);
		if (!check_row_left(grid, i, clues[i + 8]))
			return (0);
		if (!check_row_right(grid, i, clues[i + 12]))
			return (0);
		i++;
	}
	return (1);
}

/*
** Backtracking algorithm: tries 1-4 at each cell
** If valid, recurse to next cell; if stuck, backtrack (reset to 0)
*/
int	solve(int grid[SIZE][SIZE], int *clues, int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos == SIZE * SIZE)
		return (is_complete(grid, clues));
	row = pos / SIZE;
	col = pos % SIZE;
	num = 1;
	while (num <= SIZE)
	{
		if (is_valid_placement(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, clues, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
