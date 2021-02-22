/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 22:29:16 by vmusaely          #+#    #+#             */
/*   Updated: 2021/02/12 15:04:00 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

int		get_next_line(int fd, char **line);
int		ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s1);
char	*ft_strjoin(char *s1, char *s2);
int		ft_get_line_size(char *s);
char	*ft_clearmemory(char *memory);
char	*ft_new_line(char *s);

#endif
