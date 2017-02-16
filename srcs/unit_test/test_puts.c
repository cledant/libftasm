/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/16 16:20:52 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_puts(const char *s);

int		main(void)
{
	char	*test = "caca";
	char	*test2 = NULL;
	int		ret;

	printf("EOF value %d\n", EOF);
	printf("=================\n");
	ret = puts(test);
	printf("Return value vrai: %d\n", ret);
	printf("=================\n");
	ret = ft_puts(test);
	printf("Return value moi: %d\n", ret);
	printf("=================\n");
	printf("=================\n");
	ret = puts(test2);
	printf("Return value vrai: %d\n", ret);
	printf("=================\n");
	ret = ft_puts(test2);
	printf("Return value moi: %d\n", ret);
	printf("=================\n");
	return (0);
}
