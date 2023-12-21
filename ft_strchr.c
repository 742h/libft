/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:32:37 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/11 22:35:55 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	while (*str)
	{
		if (*str == (char)a)
			return ((char *)str);
		str++;
	}
	if (*str == (char)a)
		return ((char *)str);
	return (0);
}
