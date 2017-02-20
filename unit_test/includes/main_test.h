/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 10:26:49 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 18:00:45 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_TEST_H
# define MAIN_TEST_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>
# include <xlocale.h>
# include <fcntl.h>

void	test_bzero(void);
void	test_strcat(void);
void	test_isalpha(void);
void	test_isdigit(void);
void	test_isalnum(void);
void	test_isascii(void);
void	test_isprint(void);
void	test_toupper(void);
void	test_tolower(void);
void	test_puts(void);
void	test_strlen(void);
void	test_memset(void);
void	test_memcpy(void);
void	test_strdup(void);
void	test_putnbr(void);
void	test_strcmp(void);
void	test_strchr(void);

#endif
