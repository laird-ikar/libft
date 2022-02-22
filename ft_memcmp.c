/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:17:21 by bdehais           #+#    #+#             */
/*   Updated: 2022/02/21 17:25:57 by bdehais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n - 1 && ((char *) s1)[i] == ((char *) s2)[i])
	{
		i++;
	}
	if (n)
		return (((char *) s1)[i] - ((char *) s2)[i]);
	return (0);
}
