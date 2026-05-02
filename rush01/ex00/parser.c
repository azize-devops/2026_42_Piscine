/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   parser.c                                                      :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: azdursun <azdursun@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/02 14:15:29 by azdursun                     #+#    #+#              */
/*   Updated: 2026/05/02 14:15:29 by azdursun                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */


#include "rush01.h"

/*
** Returns the length of a string
*/
static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*
** Checks if input has exactly 16 digits (1-4) separated by spaces
*/
int	is_valid_format(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
			count++;
		else if (str[i] != ' ')
			return (0);
		if (str[i] >= '1' && str[i] <= '4' && str[i + 1]
			&& str[i + 1] != ' ')
			return (0);
		i++;
	}
	if (count != 16)
		return (0);
	return (1);
}

/*
** Parses input string and fills clues array with 16 integers
** Returns 1 on success, 0 on error
*/
int	parse_input(char *str, int *clues)
{
	int	i;
	int	j;

	if (ft_strlen(str) != 31)
		return (0);
	if (!is_valid_format(str))
		return (0);
	i = 0;
	j = 0;
	while (str[i] && j < 16)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			clues[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (1);
}
