/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:04:46 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/13 19:11:27 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;
	size_t			i;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	while (n > i)
	{
		while (a1[i] != a2[i])
		{
			if (a1[i] > a2[i])
			{
				return (a1[i] - a2[i]);
			}
			else if (a1[i] < a2[i])
			{
				return (a1[i] - a2[i]);
			}
		}
		i++;
	}
	return (0);
}
