/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com.tr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-24 08:03:34 by azdursun          #+#    #+#             */
/*   Updated: 2026-04-24 08:03:34 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	digit1;
	int	digit2;
	int	digit3;

	digit1 = -1;
	while (++digit1 <= 7)
	{
		digit2 = digit1;
		while (++digit2 <= 8)
		{
			digit3 = digit2;
			while (++digit3 <= 9)
			{
				write(1, &"0123456789"[digit1], 1);
				write(1, &"0123456789"[digit2], 1);
				write(1, &"0123456789"[digit3], 1);
				if (!(digit1 == 7 && digit2 == 8 && digit3 == 9))
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}
