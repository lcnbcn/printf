/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_c_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:10:33 by lucida-s          #+#    #+#             */
/*   Updated: 2023/01/16 16:10:09 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_c(int count, char c)
{
	count = write(1, &c, 1);
	if (count == -1)
		return (-1);
	count++;
	return (count);
}

int	ft_format_s(int count, char *s)
{
	int	i;

	i = -1;
	if (!s)
		s = "(null)";
	while (s[++i])
	{
		count = ft_format_c(count, s[i]);
		if (count == -1)
			return (-1);
	}
	return (count);
}
