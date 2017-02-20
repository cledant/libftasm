/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_puts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 13:13:22 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 13:26:48 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include "main_test.h"

void	test_puts(void)
{
	char	*test1 = "";
	char	*test2 = NULL;
	char	*test3 = "Bonjour !";
	char	*test4 = "This is a test \0toto\0lol\n";
	int		ret1;
	int		ret2;

	printf("========TEST FT_PUTS========\n\n");
	printf("String 1 with ft_puts:\n");
	ret1 = ft_puts(test1);
	printf("String 1 with puts:\n");
	ret2 = ft_puts(test1);
	printf("Return ft_puts: %d\n", ret1);
	printf("Return puts: %d\n", ret2);
	printf("String 2 with ft_puts:\n");
	ret1 = ft_puts(test2);
	printf("String 2 with puts:\n");
	ret2 = ft_puts(test2);
	printf("Return ft_puts: %d\n", ret1);
	printf("Return puts: %d\n", ret2);
	printf("String 3 with ft_puts:\n");
	ret1 = ft_puts(test3);
	printf("String 3 with puts:\n");
	ret2 = ft_puts(test3);
	printf("Return ft_puts: %d\n", ret1);
	printf("Return puts: %d\n", ret2);
	printf("String 4 with ft_puts:\n");
	ret1 = ft_puts(test4);
	printf("String 4 with puts:\n");
	ret2 = ft_puts(test4);
	printf("Return ft_puts: %d\n", ret1);
	printf("Return puts: %d\n", ret2);
	printf("========FIN TEST FT_PUTS========\n\n");
}
