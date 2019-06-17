/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 23:05:34 by ael-mena          #+#    #+#             */
/*   Updated: 2018/08/05 23:17:39 by ael-mena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
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
	*range = rg;
	return (i);
}
