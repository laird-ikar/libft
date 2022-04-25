/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:02:46 by bguyot            #+#    #+#             */
/*   Updated: 2022/04/25 08:03:32 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*res;

	if (!src)
		return (NULL);
	if (ft_strlen(src) <= n)
		return (ft_strdup(src));
	res = ft_calloc (n + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_memmove(res, src, n);
	return (res);
}
