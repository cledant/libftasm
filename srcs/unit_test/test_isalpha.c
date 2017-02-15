/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/15 14:07:05 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isalpha(int c);

int		main(void)
{
	int		c;
	int		ret;

	printf("=============\n");
	c = -465124;
	ret = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d\n", c, ret);
	printf("=============\n");
	c = 687894;
	ret = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d\n", c, ret);
	printf("=============\n");
	c = 'a';
	ret = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d\n", c, ret);
	printf("=============\n");
	c = 'z';
	ret = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d\n", c, ret);
	printf("=============\n");
	c = 'g';
	ret = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d\n", c, ret);
	printf("=============\n");
	c = 'A';
	ret = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d\n", c, ret);
	printf("=============\n");
	c = 'Z';
	ret = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d\n", c, ret);
	printf("=============\n");
	c = 'F';
	ret = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d\n", c, ret);
	printf("=============\n");
	c = '\n';
	ret = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d\n", c, ret);
	printf("=============\n");
	c = '~';
	ret = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d\n", c, ret);
	printf("=============\n");
	c = '\\';
	ret = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d\n", c, ret);
	printf("=============\n");
	c = ' ';
	ret = ft_isalpha(c);
	printf("Number : %c, ft_isalpha : %d\n", c, ret);
	return (0);
}
