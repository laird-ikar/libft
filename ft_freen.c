/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 07:12:58 by bguyot            #+#    #+#             */
/*   Updated: 2022/04/25 07:24:51 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freen(void *ptr, int n)
{
	int	i;

	if (n == 1)
		return (free(ptr));
	i = 0;
	while (* (void **) (ptr + i))
		ft_freen(* (void **) (ptr + i++), n - 1);
	free(ptr);
}
