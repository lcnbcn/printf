/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_i_d_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:10:52 by lucida-s          #+#    #+#             */
/*   Updated: 2023/01/17 12:21:08 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fmt_id(int count, int nb)
{
	if (nb == -2147483648)
	{
		count = ft_format_s(count, "-2147483648");
		if (count == -1)
			return (-1);
	}
	if (nb < 0)
	{
		count = ft_format_c(count, '-');
		nb *= -1;
	}
	count = ft_fmt_uxX(count, nb, 1, 10);
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_fmt_uxX(int count, unsigned long int nb, int b, int bas)
{
	char	*base;

	if (b == 1)
		base = "0123456789";
	if (b == 2)
		base = "0123456789abcdef";
	if (b == 3)
		base = "0123456789ABCDEF";
	if (nb >= bas)
	{
		count = ft_fmt_uxX(count, nb/bas, b, bas);
		if (count == -1)
			return (-1);
	}
	count = ft_format_c(count, base[nb%bas]);
	if (count == -1)
		return (-1);
	return (count);
}	

int	ft_fmt_p(int count, void *p)
{
	count = ft_format_s(count, "0x");
	if (count == -1)
		return (-1);
	count = ft_fmt_uxX(count, (unsigned long int)p, 2, 16);
	if (count == -1)
		return (-1);
	return (count);

}
