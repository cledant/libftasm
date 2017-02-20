/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 16:23:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 16:31:06 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_test.h"
#include "libfts.h"

void	test_putnbr(void)
{
	int		test = 2147483647;
	int		test2 = -2147483648;
	int		test3 = 0;
	int		test4 = -46545;
	int		test5 = 45456;

	printf("========BONUS FT_PUTNBR========\n\n");
	printf("number 1 printf :\n%d\n", test);
	printf("number 1 ft_putnbr :\n");
	ft_putnbr(test);
	printf("\n");
	printf("number 2 printf :\n%d\n", test2);
	printf("number 2 ft_putnbr :\n");
	ft_putnbr(test2);
	printf("\n");
	printf("number 3 printf :\n%d\n", test3);
	printf("number 3 ft_putnbr :\n");
	ft_putnbr(test3);
	printf("\n");
	printf("number 4 printf :\n%d\n", test4);
	printf("number 4 ft_putnbr :\n");
	ft_putnbr(test4);
	printf("\n");
	printf("number 5 printf :\n%d\n", test5);
	printf("number 5 ft_putnbr :\n");
	ft_putnbr(test5);
	printf("\n");
}
