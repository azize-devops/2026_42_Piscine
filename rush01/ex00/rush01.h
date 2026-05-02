/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   rush01.h                                                      :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: azdursun <azdursun@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/02 14:16:02 by azdursun                     #+#    #+#              */
/*   Updated: 2026/05/02 14:16:02 by azdursun                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

# define SIZE 4

/*
** printer.c - Output functions
*/
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_grid(int grid[SIZE][SIZE]);
void	print_error(void);

/*
** parser.c - Input validation and parsing
** clues[0-3]: col top, clues[4-7]: col bottom
** clues[8-11]: row left, clues[12-15]: row right
*/
int		parse_input(char *str, int *clues);
int		is_valid_format(char *str);

/*
** validator.c - Visibility check functions
** Counts visible boxes from each direction
*/
int		check_row_left(int grid[SIZE][SIZE], int row, int clue);
int		check_row_right(int grid[SIZE][SIZE], int row, int clue);
int		check_col_top(int grid[SIZE][SIZE], int col, int clue);
int		check_col_bottom(int grid[SIZE][SIZE], int col, int clue);

/*
** solver.c - Backtracking algorithm
** Tries values 1-4, backtracks on failure
*/
int		is_valid_placement(int grid[SIZE][SIZE], int row, int col, int num);
int		is_complete(int grid[SIZE][SIZE], int *clues);
int		solve(int grid[SIZE][SIZE], int *clues, int pos);

#endif
