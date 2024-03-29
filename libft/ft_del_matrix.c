/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 16:22:36 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/25 16:22:38 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_del_matrix(t_matrix **a)
{
	size_t	k;

	if (a)
	{
		if (*a)
		{
			k = 0;
			while (k < (*a)->i)
			{
				free(((*a)->mat)[k]);
				++k;
			}
			free((*a)->mat);
			free((*a));
			*a = NULL;
		}
	}
}
