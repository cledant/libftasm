/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 11:46:58 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 11:56:58 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include "main_test.h"

void	test_isalpha(void)
{
	int		c;
	int		ret;
	int		ret2;

	printf("========TEST FT_ISALPHA========\n\n");
	c = -465124;
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = 687894;
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = 'a';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = 'z';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = 'g';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = 'A';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = 'Z';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = 'F';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = '\n';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = '~';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = '\\';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = ' ';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = '@';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = '[';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = 127;
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = 0;
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = '!';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = '0';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = '5';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = '9';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = '/';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = ':';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = '`';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = '{';
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = 30;
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = 11;
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	c = 0;
	ret = ft_isalpha(c);
	ret2 = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d, isalpha : %d\n", c, ret, ret2);
	printf("========FIN TEST FT_ISALPHA========\n\n");
}
