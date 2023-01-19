/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:09:59 by lucida-s          #+#    #+#             */
/*   Updated: 2023/01/19 17:03:54 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int	ft_type(int count, va_list args, char c)
{
	if (c == '%')
		count = ft_fmt_c(count, '%');
	if (c == 'c')
		count = ft_fmt_c(count, va_arg(args, char));
	if (c == 's')
		count = ft_fmt_s(count, va_arg(args, char *));
	if (c == 'i' || c == 'd')
		count = ft_fmt_id(count, va_arg(args, int));
	if (c == 'u')
		count = ft_fmt_uxX(count, va_arg(args, unsigned int, 1, 10));
	if (c == 'x')
		count = ft_fmt_uxX(count, va_arg(args, unsigned int, 2, 16);
	if (c == 'X')
		count = ft_fmt_uxX(count, va_arg(args, unsigned int, 3, 16);
	if (c == 'p')
		count = ft_fmt_p(count, va_arg(args, unsigned long int);
	return (count);
}

int	ft_check(int count, va_list args, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '%')
		{
			count = ft_type(count, args, str[i + 1]);
			if (count == -1)
				return (-1);
			i++;
		}
		else
		{
			count = ft_fmt_c(count, str[i]);
			if (count == -1)
				return (-1);
		}
	}
	return (count);
}

int	ft_printf(char const *str, ...)
{
	int 	count;
	va_list	args;

	count = 0;
	va_start(args, str);
	count = ft_check(count, args, str);
	va_end(args);
	return (count);
}
