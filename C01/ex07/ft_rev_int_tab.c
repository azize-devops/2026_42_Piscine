/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-26 15:34:49 by azdursun          #+#    #+#             */
/*   Updated: 2026-04-26 15:34:49 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	counter;

	counter = 0;
	while (counter < (size / 2))
	{
		tmp = tab[counter];
		tab[counter] = tab [size -1 - counter];
		tab[size - 1 - counter] = tmp;
		counter++;
	}
}
