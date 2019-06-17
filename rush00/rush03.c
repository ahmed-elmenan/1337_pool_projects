/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 15:09:43 by ymanyani          #+#    #+#             */
/*   Updated: 2019/01/13 21:30:08 by ymanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (x > 0 && y > 0)
		while (j <= y)
		{
			while (i <= x)
			{
				if ((j == 1 && i == 1) || (j == y && i == 1))
					ft_putchar('A');
				else if (i != 1 && i != x && j != 1 && j != y)
					ft_putchar(' ');
				else if ((i == x && j == 1) || (j == y && i == x))
					ft_putchar('C');
				else
					ft_putchar('B');
				i++;
			}
			ft_putchar('\n');
			i = 1;
			j++;
		}
}
