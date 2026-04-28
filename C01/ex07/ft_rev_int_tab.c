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

/*#include <stdio.h>

int	main(void)
{
	int	tab[10];

	for (int i=0; i<10; i++) tab[i] = 18 + i * 2;
	printf("Before ft_rev_int_tab : ");
	for (int i=0; i<10; i++) printf("%d ", tab[i]);
	ft_rev_int_tab(tab, 10);
	printf("\nAfter fr_rev_int_tab : ");
	for (int i=0; i<10; i++) printf("%d ", tab[i]);
	printf("\n");
	return (0);
}*/
