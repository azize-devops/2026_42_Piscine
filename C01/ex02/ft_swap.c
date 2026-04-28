/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com.tr>  #+#  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-26 14:43:24 by azdursun          #+#    #+#             */
/*   Updated: 2026-04-26 14:43:24 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main (void)
{
    int temp;
	int a;
	a = 5;
	int b;
	b = 9;
	ft_swap(&a, &b);
	printf("Before ft_swap : a = %d, b = %d\n", a, b);
	ft_swap(&a,&b);
	printf("After ft_swap : a = %d, b = %d\n", a, b);
}*/