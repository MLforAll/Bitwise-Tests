/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bw_settings.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 18:27:13 by kdumarai          #+#    #+#             */
/*   Updated: 2018/01/28 14:29:14 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bw_tests.h"

/*
** Options to choose :
**
** 	Code (number)
** 	Bitwise op
**
** 	Padding Type:
** 		kPaddingNone
** 		kPaddingNormal (every 4 bits)
** 		kPaddingOctal (every 8 bits)
*/

t_padding	get_padtype(void)
{
	t_padding	padtype;

	padtype = kPaddingOctal; /* Set your padding here... */
	return (padtype);
}

size_t		get_code(void)
{
	size_t		code;

	code = 4660; /* Set your code here... */
	return (code);
}

size_t		get_bitchanged_code(size_t code)
{
	code = 0xC0 | (code >> 6); /* Do your bitwise op here... */
	return (code);
}
