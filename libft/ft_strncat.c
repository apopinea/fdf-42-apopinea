/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:16:40 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/06 14:17:50 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				c;

	i = 0;
	c = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[i + c] = s2[i];
		i++;
	}
	s1[i + c] = '\0';
	return (s1);
}
