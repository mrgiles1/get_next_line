/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagiles <dagiles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:42:33 by dagiles           #+#    #+#             */
/*   Updated: 2023/01/27 15:22:56 by dagiles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char    *ft_strchr(char *s, int c);
size_t  ft_strlen(char *s);
char    *ft_strjoin(char *backup, char *buff);
char    *ft_get_line(int fd, char *line);
char    *new_line(char *line);
char    *ft_get_next_line(char *str);
char    *get_next_line(int fd);

#endif
