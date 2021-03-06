/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:11:18 by vquesnel          #+#    #+#             */
/*   Updated: 2018/02/06 11:54:41 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int nb, int pow)
{
	int i;

	i = nb;
	if ((nb == 0 && pow != 0) || pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	while (pow > 1)
	{
		nb = nb * i;
		pow--;
	}
	return (nb);
}
