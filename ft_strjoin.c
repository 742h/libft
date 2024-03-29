/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:39:52 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/21 16:02:31 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*a1;
	unsigned char	*a2;
	int				i;
	int				k;
	char			*str;

	if (!s1 || !s2)
		return (NULL);
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	k = 0;
	str = (char *)malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (a1[i])
		str[k++] = a1[i++];
	i = 0;
	while (a2[i])
		str[k++] = a2[i++];
	str[k] = '\0';
	return (str);
}

//function protected if a parameter is NULL in line 23 for git hub repository...