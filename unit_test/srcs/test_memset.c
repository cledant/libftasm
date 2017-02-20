/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 14:34:58 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 15:42:36 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_test.h"
#include "libfts.h"

void	test_memset(void)
{
	char	*test = (char *)malloc(sizeof(char) * 100);
	char	*test2 = (char *)malloc(sizeof(char) * 100);
	char	*base = "THIS-IS-A-TEST-STR";
	int		c1 = '1';
	int		c2 = 'b';
	char	*ptr;
	char	*ptr2;	

	printf("========TEST FT_MEMSET========\n\n");
	printf("====TEST1====\n");
	bzero(test, 100);
	strcpy(test, base);
	bzero(test2, 100);
	strcpy(test2, base);
	printf("Test String :\n%s\n", test);
	ptr = ft_memset(test + 7, c1, 5);
	ptr2 = memset(test2 + 7, c1, 5);
	printf("String ft_memset :\n%s\n", test);
	printf("String memset :\n%s\n", test2);
	printf("ft_memset return pointer :\n%s\n", ptr);
	printf("memset return pointer :\n%s\n", ptr2);
	printf("====TEST2====\n");
	bzero(test, 100);
	strcpy(test, base);
	bzero(test2, 100);
	strcpy(test2, base);
	printf("Test String :\n%s\n", test);
	ptr = ft_memset(test + 7, c1, 0);
	ptr2 = memset(test2 + 7, c1, 0);
	printf("String ft_memset :\n%s\n", test);
	printf("String memset :\n%s\n", test2);
	printf("ft_memset return pointer :\n%s\n", ptr);
	printf("memset return pointer :\n%s\n", ptr2);
	printf("====TEST3====\n");
	bzero(test, 100);
	strcpy(test, base);
	bzero(test2, 100);
	strcpy(test2, base);
	printf("Test String :\n%s\n", test);
	ptr = ft_memset(test, c2, 30);
	ptr2 = memset(test2, c2, 30);
	printf("String ft_memset :\n%s\n", test);
	printf("String memset :\n%s\n", test2);
	printf("ft_memset return pointer :\n%s\n", ptr);
	printf("memset return pointer :\n%s\n", ptr2);
	printf("========FIN TEST FT_MEMSET========\n\n");
	free(test);
	free(test2);
}
