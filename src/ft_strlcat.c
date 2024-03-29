/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendes <jmendes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:27:08 by jmendes           #+#    #+#             */
/*   Updated: 2022/09/28 13:26:25 by jmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index_dest;
	size_t	index_src;

	index_src = 0;
	index_dest = ft_strlen(dest);
	if (size < index_dest)
	{
		index_src = ft_strlen(src);
		return (size + index_src);
	}
	while (index_dest < (size - 1) && src[index_src] && size > 0)
	{
		dest[index_dest++] = src[index_src++];
		dest[index_dest] = '\0';
	}
	while (src[index_src])
	{
		index_src++;
		index_dest++;
	}
	return (index_dest);
}
