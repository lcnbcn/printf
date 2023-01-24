/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_i_d_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:10:52 by lucida-s          #+#    #+#             */
/*   Updated: 2023/01/24 18:34:46 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fmt_id(int count, int nb)
{
	if (nb == -2147483648)
	{
		count = ft_fmt_s(count, "-2147483648");
		if (count == -1)
			return (-1);
	}
	else
	{
		if (nb < 0)
		{	
			count = ft_fmt_c(count, '-');
			if (count == -1)
				return (-1);
			nb *= -1;
		}
		count = ft_fmt_uxxm(count, nb, 1, 10);
		if (count == -1)
			return (-1);
	}
	return (count);
}

int	ft_fmt_uxxm(int count, unsigned int nb, int b, unsigned int bas)
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
		count = ft_fmt_uxxm(count, nb / bas, b, bas);
		if (count == -1)
			return (-1);
	}
	count = ft_fmt_c(count, base[nb % bas]);
	if (count == -1)
		return (-1);
	return (count);
}	

int	ft_fmt_phex(int count, unsigned long int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
	{
		count = ft_fmt_phex(count, nb / 16);
		if (count == -1)
			return (-1);
	}
	count = ft_fmt_c(count, base[nb % 16]);
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_fmt_p(int count, void *p)
{
	count = ft_fmt_s(count, "0x");
	if (count == -1)
		return (-1);
	count = ft_fmt_phex(count, (unsigned long int)p);
	if (count == -1)
		return (-1);
	return (count);
}
