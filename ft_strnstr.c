/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:40:45 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/13 17:14:44 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	h;
	size_t			needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)(haystack));
	if (!len)
		return (NULL);
	while (haystack[i] && i < len)
	{
		h = 0;
		while (needle[h] && needle[h] == haystack[i + h] && (i + h) < len)
			h++;
		if (needle_len == h)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
