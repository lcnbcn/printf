/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:09:59 by lucida-s          #+#    #+#             */
/*   Updated: 2023/01/17 12:15:09 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*int	ft_printf(char const *format, ...)
{
	
}*/

int	main(void)

{
	char	*a;
	
	a = "10";
	//ft_fmt_p(0, *a);

	printf("%p", a);
	return (0);
}
