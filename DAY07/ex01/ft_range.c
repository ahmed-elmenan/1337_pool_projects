/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 21:28:39 by ael-mena          #+#    #+#             */
/*   Updated: 2018/08/06 18:32:04 by ael-mena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *rg;

	if (min >= max)
		return (0);
	rg = (int*)malloc(sizeof(int) * (max - min));
	if (rg == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		rg[i] = min++;
		i++;
	}
	return (rg);
}
