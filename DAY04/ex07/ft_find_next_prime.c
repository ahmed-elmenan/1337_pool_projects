/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 07:03:48 by ael-mena          #+#    #+#             */
/*   Updated: 2018/07/26 07:27:05 by ael-mena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int count;

	count = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	while (count < nb)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb) == 0)
			nb++;
		else
			return (nb);
	}
	return (0);
}
