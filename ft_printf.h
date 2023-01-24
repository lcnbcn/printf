/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:23:40 by lucida-s          #+#    #+#             */
/*   Updated: 2023/01/20 16:34:44 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(char const *format, ...);
int	ft_fmt_c(int count, int c);
int	ft_fmt_s(int count, char *s);
int	ft_fmt_id(int count, int nb);
int	ft_fmt_uxxm(int count, unsigned int nb, int b, unsigned int bas);
int	ft_fmt_phex(int count, unsigned long int nb);
int	ft_fmt_p(int count, void *p);

#endif
