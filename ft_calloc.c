/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:43:26 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/21 16:00:05 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	ptr = (void *) malloc (count * size);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero (ptr, count * size);
	return (ptr);
}
//line 19 changed from "ULONG_MAX" to "SIZE_MAX" for git hub repository...