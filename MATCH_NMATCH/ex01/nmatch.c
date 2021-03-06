/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 18:13:13 by ael-mena          #+#    #+#             */
/*   Updated: 2018/07/29 18:14:09 by ael-mena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2)
{
	if (*s1 && *s2 == '*')
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	else if (!(*s1) && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	else if (*s1 && *s2 && *s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	else if (!(*s1) && !(*s2))
		return (1);
	return (0);
}
