/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   validator.c                                                   :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: azdursun <azdursun@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/02 14:16:16 by azdursun                     #+#    #+#              */
/*   Updated: 2026/05/02 14:16:16 by azdursun                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "rush01.h"

/*
** Counts visible boxes from left side of row
** Returns 1 if count matches clue, 0 otherwise
*/
int	check_row_left(int grid[SIZE][SIZE], int row, int clue)
{
	int	i;
	int	max;
	int	visible;

	i = 0;
	max = 0;
	visible = 0;
	while (i < SIZE)
	{
		if (grid[row][i] > max)
		{
			max = grid[row][i];
			visible++;
		}
		i++;
	}
	return (visible == clue);
}

/*
** Counts visible boxes from right side of row
*/
int	check_row_right(int grid[SIZE][SIZE], int row, int clue)
{
	int	i;
	int	max;
	int	visible;

	i = SIZE - 1;
	max = 0;
	visible = 0;
	while (i >= 0)
	{
		if (grid[row][i] > max)
		{
			max = grid[row][i];
			visible++;
		}
		i--;
	}
	return (visible == clue);
}

/*
** Counts visible boxes from top of column
*/
int	check_col_top(int grid[SIZE][SIZE], int col, int clue)
{
	int	i;
	int	max;
	int	visible;

	i = 0;
	max = 0;
	visible = 0;
	while (i < SIZE)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			visible++;
		}
		i++;
	}
	return (visible == clue);
}

/*
** Counts visible boxes from bottom of column
*/
int	check_col_bottom(int grid[SIZE][SIZE], int col, int clue)
{
	int	i;
	int	max;
	int	visible;

	i = SIZE - 1;
	max = 0;
	visible = 0;
	while (i >= 0)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			visible++;
		}
		i--;
	}
	return (visible == clue);
}
