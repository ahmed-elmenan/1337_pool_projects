/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 16:12:41 by ael-mena          #+#    #+#             */
/*   Updated: 2018/08/06 16:13:25 by ael-mena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		count;
	char	*str;

	str = malloc((argc) * sizeof(char));
	i = 1;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[count] = argv[i][j];
			j++;
			count++;
		}
		if (i < argc - 1)
			str[count] = '\n';
		count++;
		i++;
	}
	str[count - 1] = '\0';
	return (str);
}
