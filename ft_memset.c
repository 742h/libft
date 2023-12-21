/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:37:09 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/13 18:06:10 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*l;
	size_t			i;

	l = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		l[i] = c;
		i++;
	}
	return (b);
}
