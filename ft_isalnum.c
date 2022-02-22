/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:04:48 by bdehais           #+#    #+#             */
/*   Updated: 2022/02/21 14:39:12 by bdehais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isalpha(int c);
static int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

static int	ft_isalpha(int c)
{
	return (
		(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	);
}

static int	ft_isdigit(int c)
{
	return (
		(c >= '0' && c <= '9')
	);
}
