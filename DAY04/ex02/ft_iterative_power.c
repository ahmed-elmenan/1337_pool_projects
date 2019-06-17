/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 00:39:25 by ael-mena          #+#    #+#             */
/*   Updated: 2018/07/26 01:53:12 by ael-mena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int n;
	int i;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = 1;
	n = 1;
	while (i <= power)
	{
		n = n * nb;
		i++;
	}
	return (n);
}
