/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:13:44 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/13 20:25:44 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*k;
	size_t			e;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	while (s[i] != '\0' && i < start)
		i++;
	k = (char *)malloc(sizeof(char) * (len + 1));
	if (!k)
		return (NULL);
	e = 0;
	while (s[i] && len + start > i)
	{
		k[e] = s[i];
		i++;
		e++;
	}
	k[e] = '\0';
	return (k);
}
