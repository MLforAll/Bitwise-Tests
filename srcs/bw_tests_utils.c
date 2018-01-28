/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bw_tests_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 19:58:34 by kdumarai          #+#    #+#             */
/*   Updated: 2018/01/28 14:19:57 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "bw_tests.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnchar(char c, size_t n)
{
	while (n--)
		ft_putchar(c);
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

void	ft_putbinnbr_len(size_t n, size_t len, int padtype)
{
	if (!len)
		return ;
	if (len > 0)
		ft_putbinnbr_len(n / 2, len - 1, padtype);
	len--;
	if (padtype != kPaddingNone && len % padtype == 0)
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
