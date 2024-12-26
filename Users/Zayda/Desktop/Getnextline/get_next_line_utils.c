/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 09:23:57 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/12/26 09:23:57 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*mmr;
	size_t		total;
	size_t		i;

	if (!s1 || !s2)
		return (0);
	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	mmr = malloc(total * sizeof(char));
	if (!mmr)
		return (0);
	i = 0;
	while (s1[i])
	{
		mmr[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		mmr[i] = *s2++;
		i++;
	}
	mmr[i] = '\0';
	return (mmr);
}

char	*ft_strchr(const char *s, int c)
{
	char	l;
	int		i;

	i = 0;
	l = c;
	while (s[i])
	{
		if (s[i] == l)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == l)
		return ((char *)s + i);
	return (0);
}

void	ft_bzero(void *s, size_t len)
{
	size_t	i;
	char	*temp;

	temp = s;
	i = 0;
	while (i < len)
	{
		temp[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = 0;
	i = 0;
	if (size && (count * size) / size != count)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
