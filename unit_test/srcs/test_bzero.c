/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 10:09:30 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 11:19:50 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include "main_test.h"

void	test_bzero(void)
{
	char	*test = (char *)malloc(sizeof(char) * 100);

	bzero(test, 100);
	printf("=======TEST FT_BZERO=======\n\n");
	printf("====TEST1====\n");									//TEST 1
	strcpy(test, "Ceci est un test HOHOHOHOHO");
	printf("=> Test string 1 :\n%s\n", test);
	ft_bzero(test + 7, 5);
	printf("Test string 1 : ft_bzero :\n%s\n", test);
	bzero(test, 100);
	strcpy(test, "Ceci est un test HOHOHOHOHO");
	bzero(test + 7, 5);
	printf("Test string 1 : bzero :\n%s\n", test);
	printf("====TEST2====\n");									//TEST 2
	strcpy(test, "AAAAAAAAAAAAAAAAAAAH!");
	printf("=> Test string 1 :\n%s\n", test);
	ft_bzero(test, 0);
	printf("Test string 1 : ft_bzero :\n%s\n", test);
	bzero(test, 100);
	strcpy(test, "AAAAAAAAAAAAAAAAAAAH!");
	bzero(test, 0);
	printf("Test string 1 : bzero :\n%s\n", test);
	printf("====TEST3====\n");									//TEST 3
	strcpy(test, "AAAAAAAAAAAAAAAAAAAH!");
	printf("=> Test string 1 :\n%s\n", test);
	ft_bzero(test, 100);
	printf("Test string 1 : ft_bzero :\n%s\n", test);
	bzero(test, 100);
	strcpy(test, "AAAAAAAAAAAAAAAAAAAH!");
	bzero(test, 100);
	printf("Test string 1 : bzero :\n%s\n", test);
	printf("=======FIN TEST FT_BZERO=======\n\n");
	free(test);
}
