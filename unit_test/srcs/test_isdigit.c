/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 12:30:08 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 12:31:30 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include "main_test.h"

void	test_isdigit(void)
{
	int		c;
	int		ret;
	int		ret2;

	printf("========TEST FT_ISDIGIT========\n\n");
	c = -465124;
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 687894;
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 'a';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 'z';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 'g';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 'A';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 'Z';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 'F';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '\n';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '~';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '\\';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = ' ';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '@';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '[';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 127;
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 0;
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '!';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '0';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '5';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '9';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '/';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = ':';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '`';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '{';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 30;
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 11;
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 0;
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = 128;
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	c = '=';
	ret = ft_isdigit(c);
	ret2 = ft_isdigit(c);
	printf("Number : %c, ft_isdigit : %d, isdigit : %d\n", c, ret, ret2);
	printf("========FIN TEST FT_ISDIGIT========\n\n");
}
