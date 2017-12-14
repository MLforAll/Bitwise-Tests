/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bw_tests_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 19:58:34 by kdumarai          #+#    #+#             */
/*   Updated: 2017/12/14 18:51:55 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "bw_tests.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

size_t	ft_nbrlen_base(size_t nbr, size_t base)
{
	size_t	ret;

	ret = 1;
	while (nbr >= base)
	{
		nbr /= base;
		ret++;
	}
	return (ret);
}

void	ft_putbinnbr_len(size_t n, size_t len, t_padding padtype)
{
	if (!len)
		return ;
	if (len > 0)
		ft_putbinnbr_len(n / 2, len - 1, padtype);
	if (len % 4 == 0 && len > 0 && padtype == kPaddingNormal)
		ft_putchar(' ');
	ft_putchar(n % 2 + 48);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
