/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/15 16:50:34 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *restrict dst, void *restrict src, size_t n);

int		main(void)
{
	char	*test = (char *)malloc(sizeof(char) * 100);
	char	*base = "Ceci est un test HAHAHAHAHAHAHAHAHAHAHAHA";
	char	*ptr;

	bzero(test, sizeof(char) * 100);
	printf("str : %s\n", base);
	ptr = ft_memcpy(test, base + 10, 15);
	printf("apres_ft_memcpy\n");
	printf("str : %s\n", test);
	printf("test ptr\n");
	printf("str : %s\n", ptr);
	return (0);
}
