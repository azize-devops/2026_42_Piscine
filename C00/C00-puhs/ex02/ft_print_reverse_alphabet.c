/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com.tr>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-24 08:02:51 by azdursun          #+#    #+#             */
/*   Updated: 2026-04-24 08:02:51 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverseletter;

	reverseletter = 'z';
	while (reverseletter >= 'a')
	{
		write(1, &reverseletter, 1);
		reverseletter--;
	}
}
