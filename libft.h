/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:32:49 by bguyot            #+#    #+#             */
/*   Updated: 2022/02/21 17:26:17 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int c); /*DONE*/
int		ft_isdigit(int c); /*DONE*/
int		ft_isalnum(int c); /*DONE*/
int		ft_isascii(int c); /*DONE*/
int		ft_isprint(int c); /*DONE*/
int		ft_toupper(int c); /*DONE*/
int		ft_tolower(int c); /*DONE*/
int		ft_strncmp(const char *s1, const char *s2, size_t n); /*DONE*/
int		ft_memcmp(const void *s1, const void *s2, size_t n); /*DONE*/
int		ft_atoi(const char *str); /*DONE*/

size_t	ft_strlen(const char *s); /*DONE*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); /*DONE*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); /*DONE*/

void	ft_bzero(void *s, size_t n); /*DONE*/

void	*ft_memset(void *b, int c, size_t len); /*DONE*/
void	*ft_memcpy(void *dst, void *src, size_t n); /*DONE*/
void	*ft_memmove(void *dst, const void *src, size_t len); /*DONE*/
void	*ft_memchr(const void *s, int c, size_t n); /*DONE*/
void	*ft_calloc(size_t count, size_t size); /*DONE*/

char	*ft_strchr(const char *s, int c); /*DONE*/
char	*ft_strrchr(const char *s, int c); /*DONE*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1); /*DONE*/

#endif
