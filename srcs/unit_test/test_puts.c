/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/15 13:34:49 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_puts(const char *s);

int		main(void)
{
	char	*test = NULL;
	int		ret;

	printf("%s \n", test);
	printf("=================\n");
//	ret = ft_puts(test);
	printf("=================\n");
	printf("Return value moi: %d\n", ret);
	printf("=================\n");
	ret = puts(test);
	printf("=================\n");
	printf("\nReturn value vrai: %d\n", ret);
	return (0);
}
