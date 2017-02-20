/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 13:29:32 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 14:13:45 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include "main_test.h"

void	test_strlen(void)
{
	char	*test1 = "";
	char	*test3 = "Bonjour !";
	char	*test4 = "This is a test \0toto\0lol\n";
	int		ret1;
	int		ret2;

	printf("========TEST FT_STRLEN========\n\n");
	printf("String1 :\n%s\n", test1);
	ret1 = ft_strlen(test1);
	ret2 = ft_strlen(test1);
	printf("Return ft_strlen: %d\n", ret1);
	printf("Return strlen: %d\n", ret2);
	printf("String 3:\n%s\n", test3);
	ret1 = ft_strlen(test3);
	ret2 = ft_strlen(test3);
	printf("Return ft_strlen: %d\n", ret1);
	printf("Return strlen: %d\n", ret2);
	printf("String 4 :\n%s\n", test4);
	ret1 = ft_strlen(test4);
	ret2 = ft_strlen(test4);
	printf("Return ft_strlen: %d\n", ret1);
	printf("Return strlen: %d\n", ret2);
	printf("========FIN TEST FT_STRLEN========\n\n");
}
