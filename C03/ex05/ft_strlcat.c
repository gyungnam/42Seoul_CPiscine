/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginam <ginam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:35:26 by ginam             #+#    #+#             */
/*   Updated: 2021/10/18 16:38:05 by ginam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	r;

	dst_len = 0;
	src_len = 0;
	r = 0;
	while (dest[dst_len])
		dst_len++;
	while (src[r])
		r++;
	if (size <= dst_len)
		r += size;
	else
		r += dst_len;
	while (src[src_len] && dst_len + 1 < size)
		dest[dst_len++] = src[src_len++];
	dest[dst_len] = '\0';
	return (r);
}
