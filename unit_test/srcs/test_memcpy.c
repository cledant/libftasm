/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 15:14:31 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 15:33:02 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_test.h"
#include "libfts.h"

void		test_memcpy(void)
{
	char	*test = (char *)malloc(sizeof(char) * 100);
	char	*test2 = (char *)malloc(sizeof(char) * 100);
	char	*base = "Ceci-est-un-test-HAHAHAHAHAHAHAHAHAHAHAHA";
	char	*ptr;
	char	*ptr2;

	printf("========TEST FT_MEMCPY========\n\n");
	printf("====TEST1====\n");
	bzero(test, sizeof(char) * 100);
	bzero(test2, sizeof(char) * 100);
	ptr = ft_memcpy(test, base, 10);
	ptr2 = memcpy(test2, base, 10);
	printf("Base string :\n%s\n", base);
	printf("String ft_memcpy :\n%s\n", test);
	printf("String memcpy :\n%s\n", test2);
	printf("Return ptr ft_memcpy :\n%s\n", ptr);
	printf("Return ptr memcpy :\n%s\n", ptr2);
	printf("====TEST2====\n");
	bzero(test, sizeof(char) * 100);
	bzero(test2, sizeof(char) * 100);
	memset(test, '0', 50);
	memset(test2, '0', 50);
	memset(test, '1', 15);
	memset(test2, '1', 15);
	ptr = ft_memcpy(test + 10, base + 5, 10);
	ptr2 = memcpy(test2 + 10, base + 5, 10);
	printf("String ft_memcpy :\n%s\n", test);
	printf("String memcpy :\n%s\n", test2);
	printf("Return ptr ft_memcpy :\n%s\n", ptr);
	printf("Return ptr memcpy :\n%s\n", ptr2);
	printf("====TEST3====\n");
	bzero(test, sizeof(char) * 100);
	bzero(test2, sizeof(char) * 100);
	memset(test, '0', 50);
	memset(test2, '0', 50);
	memset(test, '1', 15);
	memset(test2, '1', 15);
	ptr = ft_memcpy(test + 10, base + 5, 0);
	ptr2 = memcpy(test2 + 10, base + 5, 0);
	printf("String ft_memcpy :\n%s\n", test);
	printf("String memcpy :\n%s\n", test2);
	printf("Return ptr ft_memcpy :\n%s\n", ptr);
	printf("Return ptr memcpy :\n%s\n", ptr2);
}
