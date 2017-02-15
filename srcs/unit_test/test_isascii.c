/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/15 14:45:03 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isascii(int c);

int		main(void)
{
	int		c;
	int		ret;

	printf("=============\n");
	c = -465124;
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	printf("=============\n");
	c = 687894;
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	printf("=============\n");
	c = 127;
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	printf("=============\n");
	c = 128;
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	printf("=============\n");
	c = 'z';
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	printf("=============\n");
	c = '+';
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	printf("=============\n");
	c = '=';
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	printf("=============\n");
	c = 'Z';
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	printf("=============\n");
	c = 'n';
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	printf("=============\n");
	c = '\n';
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	printf("=============\n");
	c = ' ';
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	printf("=============\n");
	c = 31;
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	printf("=============\n");
	c = 0;
	ret = ft_isascii(c);
	printf("Number : %c, ft_isascii : %d\n", c, ret);
	return (0);
}
