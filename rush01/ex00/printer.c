/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   printer.c                                                     :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: azdursun <azdursun@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/02 14:15:53 by azdursun                     #+#    #+#              */
/*   Updated: 2026/05/02 14:15:53 by azdursun                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "rush01.h"

/*
** Writes a single character to stdout
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** Writes a string to stdout character by character
*/
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*
** Prints "Error" followed by newline
*/
void	print_error(void)
{
	ft_putstr("Error\n");
}

/*
** Prints the 4x4 grid with spaces between numbers and newlines after rows
*/
void	print_grid(int grid[SIZE][SIZE])
{
	int	row;
	int	col;

	row = 0;
	while (row < SIZE)
	{
		col = 0;
		while (col < SIZE)
		{
			ft_putchar(grid[row][col] + '0');
			if (col < SIZE - 1)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
