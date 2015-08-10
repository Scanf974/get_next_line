/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 15:28:09 by bsautron          #+#    #+#             */
/*   Updated: 2014/11/26 17:23:25 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE	10000
# define RET		0
# define END		1
# define FD			2
# define MAX_FILES	300

# include "libft.h"

int		get_next_line(int fd, char **line);

#endif
