/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/15 16:04:08 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_bzero(void *s, size_t n);

int		main(void)
{
	char	*test = (char *)malloc(sizeof(char) * 100);

	strcpy(test, "Ceci est un test HOHOHOHOHO");
	printf("str : %s\n", test);
	ft_bzero(test + 10, 0);
	printf("apres_ft_bzero\n");
	printf("str : %s\n", test);
	return (0);
}
