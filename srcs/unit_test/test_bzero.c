/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/14 20:10:25 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_bzero(void *s, size_t n);

int		main(void)
{
	char	*test = "Ceci est un test";
	size_t	len = strlen(test);

	printf("str : %s\n", test);
	ft_bzero(test, len);
	printf("apres_ft_bzero\n");
	printf("str : %s\n", test);
	return (0);
}
