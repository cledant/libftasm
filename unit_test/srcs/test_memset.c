/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/16 13:02:30 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int		main(void)
{
	char	*test = (char *)malloc(sizeof(char) * 100);
	int		c1 = '1';
	int		c2 = 'b';
	char	*ptr;

	bzero(test, sizeof(char) * 100);
	printf("AVANT TEST 1\n");
	ptr = ft_memset(test, c1, 50);
	printf("TEST 1 ft_memset\n");
	printf("str : %s\n", test);
	printf("test ptr\n");
	printf("str : %s\n", ptr);
	ptr = ft_memset(test + 20, c2, 10);
	printf("TEST 2 ft_memset\n");
	printf("str : %s\n", test);
	printf("test ptr\n");
	printf("str : %s\n", ptr);
	return (0);
}
