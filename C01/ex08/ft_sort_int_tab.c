/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-26 16:04:08 by azdursun          #+#    #+#             */
/*   Updated: 2026-04-26 16:04:08 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	tmp;

	while (size > 0)
	{
		counter = 0;
		while (counter < size -1)
		{
			if (tab[counter] > tab[counter + 1])
			{
				tmp = tab[counter];
				tab[counter] = tab[counter + 1];
				tab[counter + 1] = tmp;
			}
			counter++;
		}
		size--;
	}
}

/*#include <stdio.h>

int  main()
{
	int *tab[5] = {1, 4, 7, 9, 6};
	ft_sort_int_tab(tab, 5);
	printf("\nAfter fr_rev_int_tab : ");
	for (int i=0; i<5; i++) printf("%d ", tab[i]);
	printf("\n");
	return (0);

}*/