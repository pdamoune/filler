/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_set_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 21:28:25 by philippe          #+#    #+#             */
/*   Updated: 2017/04/26 02:50:14 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

void	prf_set_x(char *str)
{
	int i;

	i = 0;
	prf_fill_c(str[0]);
	TYPE == 'X' || TYPE == 'B' ? prf_fill_c(str[1] - 32) : prf_fill_c(str[1]);
}
