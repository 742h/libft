/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:50:46 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/11 22:34:01 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	i = 0;
	while (i < dstsize && d[i] != '\0')
	{
		i++;
	}
	j = dstsize - i;
	if (j == 0)
	{
		return (i + ft_strlen((const char *)s));
	}
	while (j > 1 && *s != '\0')
	{
		d[i++] = *s++;
		j--;
	}
	d[i] = '\0';
	return (i + ft_strlen((const char *)s));
}
