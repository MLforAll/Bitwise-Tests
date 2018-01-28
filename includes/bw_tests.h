/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bw_tests.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 18:11:37 by kdumarai          #+#    #+#             */
/*   Updated: 2018/01/28 14:20:23 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BW_TESTS_H
# define BW_TESTS_H

# include <string.h>

/*
** Settings
*/

typedef enum	e_padding
{
	kPaddingNone = 0,
	kPaddingNormal = 4,
	kPaddingOctal = 8
}		t_padding;

t_padding	get_padtype(void);
size_t		get_code(void);
size_t		get_bitchanged_code(size_t code);

/*
** Utils
*/

void		ft_putchar(char c);
void		ft_putnchar(char c, size_t n);
void		ft_putstr(char *str);
void		ft_putbinnbr_len(size_t n, size_t len, int padtype);
size_t		ft_nbrlen_base(size_t nbr, size_t base);

#endif
