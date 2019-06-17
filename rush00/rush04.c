/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 15:09:43 by ymanyani          #+#    #+#             */
/*   Updated: 2019/01/13 21:31:22 by ymanyani         ###   ########.fr       */
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
				if ((i == 1 && j == 1)
						|| (i == x && j == y && y != 1 && x != 1))
					ft_putchar('A');
				else if ((j == y && i == 1) || (j == 1 && i == x))
					ft_putchar('C');
				else if (i != 1 && i != x && j != 1 && j != y)
					ft_putchar(' ');
				else
					ft_putchar('B');
				i++;
			}
			ft_putchar('\n');
			i = 1;
			j++;
		}
}
