/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 03:39:23 by sgah              #+#    #+#             */
/*   Updated: 2019/10/25 19:52:48 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>

typedef struct			s_file
{
	char				*buf;
	int					fd;
	struct s_file		*next;
}						t_file;

size_t					ft_strlen(const char *s);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strjoin_free(char **s1, char *s2);
char					*ft_strdup(const char *s1);
int						get_next_line(int fd, char **line);

#endif
