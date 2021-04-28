/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 02:12:35 by sgah              #+#    #+#             */
/*   Updated: 2019/10/25 19:53:09 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s && s[len])
		len++;
	return (len);
}

char		*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char		*ft_strdup(const char *s1)
{
	char		*dup;
	size_t		i;

	i = 0;
	if (!(dup = (char *)malloc(sizeof(char *) * ft_strlen(s1) + 1)))
		return (NULL);
	while (s1 && s1[i])
	{
		dup[i] = ((char *)s1)[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char		*ft_strjoin_free(char **s1, char *s2)
{
	char	*r;
	char	*c1;
	char	*c2;
	size_t	i;

	if (!(r = (char *)malloc(ft_strlen(*s1) + ft_strlen(s2) + 1)))
		return (NULL);
	c1 = *s1;
	c2 = s2;
	i = 0;
	while (*c1)
		r[i++] = *(c1++);
	while (*c2)
		r[i++] = *(c2++);
	r[i] = '\0';
	free(*s1);
	return (r);
}
