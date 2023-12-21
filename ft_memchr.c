/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:18:30 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/12 23:28:59 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*v;

	v = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*v == (unsigned char )c)
			return ((char *)v);
		v++;
	}
	return (0);
}
